#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Node {
    int num;
    struct Node *nextNode;
} Node;

typedef struct LinkedList {
    Node *firstNode;
    Node *lastNode;
    int length;
} LinkedList;

//prototypes
void init_list(LinkedList *list);
void init_node(Node *node, int num);
void append(LinkedList *list, int num);
void printList(LinkedList *list);
int pop(LinkedList *list);

int main() {
    LinkedList ls;
    init_list(&ls);
    append(&ls, 10);
    append(&ls, 4);
    append(&ls, 1);
    append(&ls, -51);
    printList(&ls);
    printf("%d", pop(&ls));
    printf("\n");
    printList(&ls);
    return 0;
}

void append(LinkedList *list, int num) {
    Node *newNode = malloc(sizeof(Node));
    init_node(newNode, num);
    if (list->firstNode == NULL) {
        list->firstNode = newNode;
    }
    else {
        list->lastNode->nextNode = newNode;
    }
    list->lastNode = newNode;
    list->length++;
}

void init_node(Node *newNode, int num) {
    newNode->num = num;
    newNode->nextNode = NULL;
}

void init_list(LinkedList *list) {
    list->firstNode = NULL;
    list->lastNode = NULL;
    list->length = 0;
}

void printList(LinkedList *list) {
    Node *n = list->firstNode;
    while (n != NULL) {
        printf("%d ", n->num);
        n = n->nextNode;
    }
    printf("\n");
}   

int pop(LinkedList *list) {
    if(list->length == 0) {
        return INT_MIN;
    }
    
    Node *n = list->firstNode;
    if(list->length == 1) {
        int value = list->firstNode->num;
        list->firstNode = NULL;
        list->lastNode = NULL;
        list->length = 0;
        free(n);
        return value;
    }

    int value = list->lastNode->num;
    int counter = 1;
    while(counter < list->length - 1) {
        n = n->nextNode;
        counter++;
    }
    n->nextNode = NULL;
    free(list->lastNode);
    list->lastNode = n;
    list->length--;
    return value;
    
}