#include <stdio.h>

typedef struct node {
    int val;
    struct node *next;
} node;

node *createNode(int input) {
    node *newNode = (node *)malloc(sizeof(node));
    if (newNode == NULL) {
        printf("Memory alloc failed\n");
        return NULL;
    }
    newNode->val = input;
    newNode->next = NULL;
    return newNode;
}

int main() {
    node *head = NULL;

    head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);

    node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    printf("\n");

    return 0;
}
