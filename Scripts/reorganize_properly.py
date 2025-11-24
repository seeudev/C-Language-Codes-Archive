#!/usr/bin/env python3
import os
import shutil
from pathlib import Path

def main():
    base_path = Path('/home/seeudev/Projects/C-Language-Codes')
    
    # Clean up previous organization
    csit121_old = base_path / 'CSIT121_Fundamentals'
    csit122_old = base_path / 'CSIT122_Intermediate'
    
    if csit121_old.exists():
        shutil.rmtree(csit121_old)
    if csit122_old.exists():
        shutil.rmtree(csit122_old)
    
    # Create new structures
    csit121_path = base_path / 'CSIT121_Fundamentals'
    csit122_path = base_path / 'CSIT122_Intermediate'
    
    # CSIT121 Categories
    csit121_categories = {
        'Standalone_Examples': 'Single-file programs that run independently',
        'Practice_Exercises': 'CodeChum and practice problems',
        'Projects': 'Multi-file projects with dependencies'
    }
    
    for cat in csit121_categories:
        (csit121_path / cat).mkdir(parents=True, exist_ok=True)
    
    # CSIT122 - Organize by project
    csit122_projects = base_path / 'G5 CSIT 122 Intermediate Programming/tobePassed'
    
    # Copy CSIT122 projects maintaining structure
    if csit122_projects.exists():
        for project_dir in csit122_projects.iterdir():
            if project_dir.is_dir():
                dest = csit122_path / project_dir.name
                if not dest.exists():
                    shutil.copytree(project_dir, dest)
                    print(f"Copied project: {project_dir.name}")
    
    # CSIT121 - Categorize files
    csit121_source = base_path / 'CSIT121/outputs/Experimental Cumulative'
    
    if csit121_source.exists():
        for c_file in csit121_source.glob('*.c'):
            content = c_file.read_text(errors='ignore')
            
            # Check if it has custom includes (project file)
            if '#include "' in content and 'ARRAYop' not in c_file.name:
                dest_dir = csit121_path / 'Projects'
            elif 'codechum' in c_file.name.lower() or 'lair' in c_file.name.lower():
                dest_dir = csit121_path / 'Practice_Exercises'
            else:
                dest_dir = csit121_path / 'Standalone_Examples'
            
            dest_file = dest_dir / c_file.name
            counter = 1
            while dest_file.exists():
                dest_file = dest_dir / f"{c_file.stem}_{counter}{c_file.suffix}"
                counter += 1
            
            shutil.copy2(c_file, dest_file)
    
    # Copy other CSIT121 sources
    other_sources = [
        base_path / 'CSIT121/outputs/BeforePass',
        base_path / 'CSIT121/outputs/Pass',
        base_path / 'CSIT121/outputs/Previous'
    ]
    
    for source in other_sources:
        if source.exists():
            for c_file in source.glob('*.c'):
                dest_dir = csit121_path / 'Projects' if c_file.stem.startswith('PANCITO') else csit121_path / 'Standalone_Examples'
                dest_file = dest_dir / c_file.name
                counter = 1
                while dest_file.exists():
                    dest_file = dest_dir / f"{c_file.stem}_{counter}{c_file.suffix}"
                    counter += 1
                shutil.copy2(c_file, dest_file)
    
    # Copy tests from CSIT122 as practice
    tests_dir = base_path / 'G5 CSIT 122 Intermediate Programming/tests'
    if tests_dir.exists():
        practice_dir = csit121_path / 'Practice_Exercises'
        for c_file in tests_dir.glob('*.c'):
            dest_file = practice_dir / c_file.name
            counter = 1
            while dest_file.exists():
                dest_file = practice_dir / f"{c_file.stem}_{counter}{c_file.suffix}"
                counter += 1
            shutil.copy2(c_file, dest_file)
    
    print("\n=== Reorganization Complete ===")
    
    # Count files
    for course in [csit121_path, csit122_path]:
        print(f"\n{course.name}:")
        for subdir in sorted(course.iterdir()):
            if subdir.is_dir():
                count = len(list(subdir.glob('*.*')))
                print(f"  {subdir.name}: {count} files")

if __name__ == '__main__':
    main()
