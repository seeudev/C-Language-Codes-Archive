#include<stdio.h>
#include<string.h>
int main () {

    char name[20];
    int age,year,vowel;

    printf("Enter name: "); gets(name);
    int length = strlen(name);
    vowel = (name[length-1] == 'a' || name[length-1] == 'e' || name[length-1] == 'i' || name[length-1] == 'o' || name[length-1] == 'u');
    if (vowel) {
    	printf("Enter age: "); scanf("%d",&age);
    	if (age%2==0 && age>0) {
    		printf("Wow, you're special!");
		}
		else {
			printf("Enter birth year: "); scanf("%d",&year);
			if (year%2==0 && year>0) {
				printf("Oh, you're still special!");
			}
			else {
				printf("You will be special next year.");
			}
		}
	}
	else {
		printf("You're awesome!");
	}
}
