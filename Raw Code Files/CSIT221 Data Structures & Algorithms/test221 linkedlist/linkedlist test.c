#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int val;
	struct node *next;
}node;

void printList(node *head);

node *createNode(int input){
	node *newNode=(node*)malloc(sizeof(node));
	if(newNode==NULL){
		printf("Memory alloc failed\n");
		return NULL;
	}
	newNode->val=input;
	newNode->next=NULL;
	return newNode;
}

node *insertAtFront(node *head, int input){
	node *newNode=createNode(input);
	newNode->next=head;
	return newNode;
}

node *insertAtBack(node *head, int input){
	node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	node *newNode=createNode(input);
	temp->next=newNode;
	return head;
}

int main(){
	node *head=NULL;
	
	head=createNode(1);
	head->next=createNode(2);
	head->next->next=createNode(3);
	head->next->next->next=createNode(4);
	printList(head);
	
	printf("Added At Front\n");
	head=insertAtFront(head,0);
	printList(head);
	
	printf("Added At Back\n");
	head=insertAtBack(head,5);
	printList(head);
	
	return 0;
}

void printList(node *head){
	node *temp=head;
	while(temp!=NULL){
		printf(" %d -->",temp->val);
		temp=temp->next;
	}
	printf(" NULL ");
	printf("\n\n");
}


