#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int val;
	struct node *next;
}node;

void printList(node *head);

node *createNode(int data){
	node *newNode=(node*)malloc(sizeof(node));
	newNode->val=data;
	newNode->next=NULL;
	return newNode;
}

node *insertFront(node *head, int data){
	node *newNode=createNode(data);
	newNode->next=head;
	head=newNode;
	return newNode;
}

node *insertBack(node *head, int data){
	node *newNode=createNode(data);
	node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
	return head;
}

int main(){
	node *head;
	head=createNode(1);
	head->next=createNode(2);
	printList(head);
	head=insertFront(head,0);
	printList(head);
	head=insertBack(head,3);
	printList(head);
	
}

void printList(node *head){
	node *temp;
	temp=head;
	while(temp!=NULL){
		printf(" %d -->",temp->val);
		temp=temp->next;
	}
	printf(" NULL\n");
}
