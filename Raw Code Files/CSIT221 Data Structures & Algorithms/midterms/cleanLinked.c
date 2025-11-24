#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int val;
	struct node *next;
}node;

typedef node *nodeptr;

void printList(nodeptr head);

nodeptr createNode(int data){
	nodeptr newNode=(node*)malloc(sizeof(node));
	newNode->val=data;
	newNode->next=NULL;
	return newNode;
}

nodeptr insertFront(nodeptr head, int data){
	nodeptr newNode=createNode(data);
	newNode->next=head;
	head=newNode;
	newNode->val=data;
	return newNode;
}

nodeptr insertBack(nodeptr head, int data){
	nodeptr newNode=createNode(data);
	nodeptr temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
	return head;
}

int main (){
	nodeptr head;
	head=createNode(1);
	head->next=createNode(2);
	printList(head);
	head=insertFront(head,0);
	printList(head);
	head=insertBack(head,3);
	printList(head);
}

void printList(nodeptr head){
	nodeptr temp=head;
	while(temp!=NULL){
		printf(" %d-->",temp->val);
		temp=temp->next;
	}
	printf("NULL\n");
}
