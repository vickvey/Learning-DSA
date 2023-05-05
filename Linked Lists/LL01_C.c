#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    struct Node* next;
};

void InsertAtHead (struct Node** head, int val) {
    struct Node* new_Node = (struct Node*)malloc(sizeof(struct Node));
    new_Node->val = val;
    new_Node->next = *head;
    *head = new_Node;
    return;
}

void InsertAtLast (struct Node** head, int val) {
    struct Node* new_Node = (struct Node*)malloc(sizeof(struct Node));
    new_Node->val = val;
    new_Node->next = (void*)NULL;
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp = *head;
    while(temp->next!=(void*)NULL) {
        temp = temp->next;
    }
    temp->next = new_Node;
    return;
}

void InsertAtPosition (struct Node** head, int position, int val) {
    struct Node* new_Node = (struct Node*)malloc(sizeof(struct Node));
    new_Node->val = val;
    new_Node->next = (void*)NULL;
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp = *head;
    int k = 0;
    while(k!=position-1) {
        temp = temp->next;
        k++;
    }
    new_Node->next = temp->next;
    temp->next = new_Node;
    return;
}

void Display (struct Node* head) {
    struct Node* temp = head;
    while (temp!=(void*)NULL) {
        printf("%d->", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
    return;
}

int main (int argc, char *argv[]) {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head = (void*)NULL;
    InsertAtHead(&head, 10);
    Display(head);
    InsertAtLast(&head, 20);
    Display(head);
    InsertAtLast(&head, 30);
    Display(head);
    InsertAtPosition(&head, 1, 50);
    Display(head);
    return EXIT_SUCCESS;
}