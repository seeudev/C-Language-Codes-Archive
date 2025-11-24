#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "struct.h"

#define NEONRED "\033[1;38;5;203m"
#define NEONGREEN "\033[1;38;5;82m"
#define NEONBLUE "\033[1;38;5;69m"
#define NEONYELLOW "\033[1;38;5;226m"
#define NEONMAGENTA "\033[1;38;5;198m"
#define NEONCYAN "\033[1;38;5;51m"
#define NEONORANGE "\033[1;38;5;208m"
#define NEONPINK "\033[1;38;5;213m"
#define NEONDARKVIOLET "\033[1;38;5;57m"
#define NEONPURPLE "\033[1;38;5;129m"
#define RESET   "\x1b[0m"

#define MAX_TEN 10
#define MAX_FIFTY 50
 
struct name {
    char firstName[MAX_FIFTY];
    char middleName[MAX_FIFTY];
    char lastName[MAX_FIFTY];
};
 
struct birth {
    char month[MAX_FIFTY];
    int day;
    long year;
};
 
struct mysubject {
    char subject[MAX_FIFTY];
    float unit_per_subject;
    float finalGrade_per_subject;
};
 
struct studentRec {
    long idnumber;
    struct name students_name;
    char gender;
    struct birth birthdate;
    char courseYear[MAX_TEN];
    int numberOfSubjectsEnrolled;
    struct mysubject subjects[MAX_TEN];
};
 
int main() {
    int choice;
    int i;
    struct studentRec student;
    gotoxy(34,34);
    do {
        clrscr();
        landingGreet();

        gotoxy(10, 5); printf("ID Number: ");
        gotoxy(35, 5); scanf("%ld", &student.idnumber);
        clearInputBuffer();  
 
        gotoxy(10, 6); printf("Name<FN><MN><LN>: ");
        gotoxy(35, 6); scanf("%s %s %s", student.students_name.firstName, student.students_name.middleName, student.students_name.lastName);
        clearInputBuffer();
 
 
        gotoxy(10, 7); printf("Gender<M/F> : ");
        gotoxy(35, 7); scanf(" %c", &student.gender);
        clearInputBuffer();
 
 
        gotoxy(10, 8); printf("Birthdate<Jan 1 0000>: ");
        gotoxy(35, 8);scanf("%s %d %ld", student.birthdate.month, &student.birthdate.day, &student.birthdate.year);
        clearInputBuffer();  
 
 
        gotoxy(10, 9); printf("Course & Year: ");
        gotoxy(35, 9); fgets(student.courseYear, MAX_TEN, stdin);
        student.courseYear[strcspn(student.courseYear, "\n")] = 0;
 
        gotoxy(20, 11); printf("Total no. of subjects: ");
        scanf("%d", &student.numberOfSubjectsEnrolled);
        clearInputBuffer();
        
        gotoxy(10, 13); printf("SUBJECT");
        gotoxy(30, 13); printf("UNIT");
        gotoxy(50, 13); printf("GRADE");
 
 
        for (i = 0; i < student.numberOfSubjectsEnrolled; i++) {
            gotoxy(10, 14 + i); fgets(student.subjects[i].subject, MAX_FIFTY, stdin);
            student.subjects[i].subject[strcspn(student.subjects[i].subject, "\n")] = 0;
 
            gotoxy(30, 14 + i); scanf("%f", &student.subjects[i].unit_per_subject);
            clearInputBuffer();  
 
            gotoxy(50, 14 + i); scanf("%f", &student.subjects[i].finalGrade_per_subject);
            clearInputBuffer();
        }
        float sumProduct = 0;
        float total_units = 0;
        for (i = 0; i < student.numberOfSubjectsEnrolled; i++) {
            sumProduct += (student.subjects[i].unit_per_subject * student.subjects[i].finalGrade_per_subject);
            total_units += student.subjects[i].unit_per_subject;
        }
        float gpa = sumProduct / total_units;
 
        gotoxy(10, 15 + student.numberOfSubjectsEnrolled); printf("GPA : %.2f\n", gpa);
        gotoxy(10, 17 + student.numberOfSubjectsEnrolled); printf("Press 1 to continue or 0 to exit... ");
        scanf("%d", &choice);
 
    } while (choice == 1);
 
    return 0;
}
