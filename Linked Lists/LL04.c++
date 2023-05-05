//Print the linked list into reverse order
//Pattern: Traversing in reverse order
#include <iostream>
#include "LL01.h"
#include "LL02.h"
using namespace std;

void PrintReverse (Node* head) { //Using recursion stack
    if (head==nullptr){
        return;
    } else {
        PrintReverse(head->next);
        cout<<head->val<<"->";
    }
}

Node* ReverseList (Node* &head) {
    Node* prev_ptr = nullptr;
    Node* current_ptr = head;
    //currptr->next = prev_ptr;
    // move all ptrs by one step ahead
    while (current_ptr!=nullptr) {
        Node* next_ptr = current_ptr->next;
        current_ptr->next = prev_ptr;
        prev_ptr = current_ptr;
        current_ptr = next_ptr;
    }
    //when this loop ends, prev pointer pointing to my last node which is new head
    Node* new_head = prev_ptr;
    return new_head;
}

int main() {
    LinkedList ll;
    int n; cout<<"Enter the size of linked list: \n"; cin>>n;
    int temp;
    cout<<"Enter the list members\n";
    while(n--) {
        cin>>temp;
        ll.insertAtTail(temp);
    }
    cout<<"original list is:\n";
    ll.Display();
    cout<<"\n";
    PrintReverse(ll.head);
    cout<<"NULL\n";
    ll.head = ReverseList(ll.head);
    ll.Display();
    
    return 0;
}