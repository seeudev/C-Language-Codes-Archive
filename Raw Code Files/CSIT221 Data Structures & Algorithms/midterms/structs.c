#include<stdio.h>
#include<stdlib.h>
#include<string.h>



typedef struct Person{
	char name[30];
	int age;
}Person;

void printStruct(Person *person);

Person *createPerson(char *name, int age){
	Person *newPerson=(Person*)malloc(sizeof(Person));
	strcpy(newPerson->name, name);
	newPerson->age=age;
	return newPerson;
}

int main(){
	Person *p=createPerson("Harry",22);
	printStruct(p);
}

void printStruct(Person *person){
	printf("Name: %s\n",person->name);
	printf("Age: %d\n",person->age);
}
