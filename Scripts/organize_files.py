#!/usr/bin/env python3
import os
import shutil
import re
from pathlib import Path

# Define categorization keywords
INTERMEDIATE_KEYWORDS = [
    'malloc', 'calloc', 'realloc', 'free',  # Dynamic memory
    'struct ', 'typedef struct',  # Structures
    'fopen', 'fclose', 'fread', 'fwrite', 'FILE',  # File I/O
    '->',  # Pointer to struct member
    '**',  # Pointer to pointer
    'enum ',  # Enumerations
    'union ',  # Unions
]

FUNDAMENTALS_KEYWORDS = [
    'printf', 'scanf', 'for', 'while', 'if', 'else', 'switch', 'case'
]

def read_file_content(filepath):
    """Read C file content safely"""
    try:
        with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
            return f.read()
    except:
        return ""

def categorize_file(filepath):
    """Determine if file is CSIT121 or CSIT122 based on content"""
    content = read_file_content(filepath)
    
    # Check for intermediate concepts
    for keyword in INTERMEDIATE_KEYWORDS:
        if keyword in content:
            return 'CSIT122_Intermediate'
    
    # Default to fundamentals
    return 'CSIT121_Fundamentals'

def determine_topic(filepath, content):
    """Determine the specific topic based on file content"""
    content_lower = content.lower()
    
    # CSIT122 Topics
    if 'struct ' in content or 'typedef struct' in content:
        return '08_Structures'
    if any(word in content for word in ['malloc', 'calloc', 'realloc', 'free']):
        return '06_Dynamic_Memory'
    if any(word in content for word in ['fopen', 'fclose', 'fread', 'fwrite', 'FILE']):
        return '07_File_IO'
    if '->' in content or '**' in content:
        return '05_Pointers_Advanced'
    if 'enum ' in content or 'union ' in content:
        return '09_Advanced_Data_Types'
    
    # CSIT121 Topics
    if 'printf' in content and 'scanf' in content and not any(loop in content for loop in ['for', 'while', 'do']):
        return '01_Input_Output'
    if 'if' in content and 'else' in content:
        return '02_Conditionals'
    if 'for' in content or 'while' in content or 'do' in content:
        return '03_Loops'
    if 'switch' in content and 'case' in content:
        return '04_Switch_Case'
    if re.search(r'int\s+\w+\s*\(', content) or re.search(r'void\s+\w+\s*\(', content):
        if '[' in content and ']' in content:
            return '06_Arrays'
        return '05_Functions'
    if '[' in content and ']' in content:
        return '06_Arrays'
    if 'char' in content and ('string' in content_lower or 'str' in content_lower):
        return '07_Strings'
    
    # Default
    return '10_Miscellaneous'

def main():
    base_path = Path('/home/seeudev/Projects/C-Language-Codes')
    
    # Create new directory structure
    csit121_path = base_path / 'CSIT121_Fundamentals'
    csit122_path = base_path / 'CSIT122_Intermediate'
    
    # Define topic folders
    csit121_topics = {
        '01_Input_Output': 'Basic I/O operations',
        '02_Conditionals': 'If-else statements',
        '03_Loops': 'For, while, do-while loops',
        '04_Switch_Case': 'Switch-case statements',
        '05_Functions': 'Function declarations and calls',
        '06_Arrays': 'Array operations',
        '07_Strings': 'String manipulation',
        '10_Miscellaneous': 'Other fundamentals'
    }
    
    csit122_topics = {
        '05_Pointers_Advanced': 'Pointer operations',
        '06_Dynamic_Memory': 'malloc, calloc, free',
        '07_File_IO': 'File operations',
        '08_Structures': 'Struct and typedef',
        '09_Advanced_Data_Types': 'Enums, unions',
        '10_Miscellaneous': 'Other intermediate concepts'
    }
    
    # Create directories
    for topic in csit121_topics.keys():
        (csit121_path / topic).mkdir(parents=True, exist_ok=True)
    
    for topic in csit122_topics.keys():
        (csit122_path / topic).mkdir(parents=True, exist_ok=True)
    
    # Find all C files
    c_files = list(base_path.glob('**/*.c'))
    h_files = list(base_path.glob('**/*.h'))
    all_files = c_files + h_files
    
    # Categorize and move files
    moved_files = {'CSIT121': {}, 'CSIT122': {}}
    
    for filepath in all_files:
        # Skip if already in organized directories
        if 'CSIT121_Fundamentals' in str(filepath) or 'CSIT122_Intermediate' in str(filepath):
            continue
        
        content = read_file_content(filepath)
        category = categorize_file(filepath)
        topic = determine_topic(filepath, content)
        
        # Determine destination
        if category == 'CSIT121_Fundamentals':
            dest_dir = csit121_path / topic
            course = 'CSIT121'
        else:
            dest_dir = csit122_path / topic
            course = 'CSIT122'
        
        # Move file
        dest_file = dest_dir / filepath.name
        
        # Handle duplicate names
        counter = 1
        while dest_file.exists():
            stem = filepath.stem
            suffix = filepath.suffix
            dest_file = dest_dir / f"{stem}_{counter}{suffix}"
            counter += 1
        
        try:
            shutil.copy2(filepath, dest_file)
            if topic not in moved_files[course]:
                moved_files[course][topic] = []
            moved_files[course][topic].append(filepath.name)
            print(f"Moved: {filepath.name} -> {category}/{topic}")
        except Exception as e:
            print(f"Error moving {filepath}: {e}")
    
    print("\n=== Organization Complete ===")
    print(f"CSIT121 files organized: {sum(len(files) for files in moved_files['CSIT121'].values())}")
    print(f"CSIT122 files organized: {sum(len(files) for files in moved_files['CSIT122'].values())}")
    
    return moved_files, csit121_topics, csit122_topics

if __name__ == '__main__':
    main()
