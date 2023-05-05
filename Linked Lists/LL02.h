//Delete every alternate elements of a linked list
#include <stdlib.h>
#include "LL01.h"
using namespace std;
#pragma once

void altDelete (Node* &head) {
    Node* current = head;
    while(current!=NULL && current->next!=NULL) {
        Node* temp = current->next;
        current->next = current->next->next;
        free(temp);
        current = current->next;
    }
    return;
}

/*int main() {
    LinkedList ll;
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.insertAtTail(50);
    ll.insertAtTail(60);
    ll.Display();
    altDelete(ll.head);
    ll.Display();
    return 0;
     
}*/