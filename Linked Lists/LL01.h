#pragma once
#include <stdlib.h>
using namespace std;

class Node {
    public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = nullptr;
    }
    void ListLength (Node** head) {
        int counter = 0;

        Node* temp = *head;
        while(temp!=nullptr) {
            counter++;
            temp = temp->next;
        }
        if(counter==0) {
            std::cout << "Empty List\n";
        } else {
            std::cout << counter << "\n";
        }
        return;
    }

};

class LinkedList {
    public:
        Node* head;
        LinkedList (){
            head = NULL;
        }

        void insertAtTail (int value) {
            Node* new_Node = new Node(value);
            if (head==NULL) {
                head = new_Node;
                return;
            } else {
                Node* temp = head;
                while (temp->next!= NULL) {
                    temp = temp->next;
                }
                temp->next = new_Node;
            }
        }
        void Display(){
            Node* temp = head;
            while (temp!=nullptr) {
                std::cout << "(" << temp->val << ")" << "->";
                temp = temp->next;
            }
            std::cout<<"NULL\n";
        }
};

void InsertAtHead (Node** head, int val) { //passing head as reference using pointer to pointer
    Node* new_Node = new Node(val);
    //if passed as Node* &head  then use the below two lines instead of lines 3 and 4
    //  new_Node->next = head;
    //  head = new_Node; 
    new_Node->next = *head; //3
    *head = new_Node;       //4
    return;
}

void InsertAtLast (Node** head, int val) {
    Node* new_Node = new Node(val);
    Node* temp = *head;
    while (temp->next!=nullptr) {
        temp = temp->next;
    }
    temp->next = new_Node;
    
    return;
}

void InsertAtPosition (Node* &head, int position, int val) {
    Node* new_Node = new Node(val);
    Node* temp = head;
    int k = 0;
    while (k != position-1) {
        temp = temp->next;
        k++;
    }
    // temp is pointing to position-1
    new_Node->next = temp->next;
    temp->next = new_Node;
    return;
}

void UpdateAtPosition (Node* &head, int position, int val) {
    Node* temp = head;
    int k = 0; 
    while (k != position) {
        temp = temp->next;
        k++;
    }
    // temp will be pointing to kth Node
    temp->val = val;
    return;
}

void deleteAtHead (Node** head) {
    Node* temp = *head;
    *head = (*head)->next;
    free(temp);
    return;
}

void deleteAtLast (Node** head) {
    Node* temp = *head;
    while((temp->next)->next!=nullptr) {
        temp = temp->next;
    }
    Node* tempStore = temp->next;
    temp->next = nullptr;
    free(tempStore);
}

void deleteAtPosition (Node** head, int position) {
    Node* temp = *head;
    int k = 0;
    while (k!=position-1) {
        temp = temp->next;
        k++;
    }
    Node* tbDeltd = temp->next;
    temp->next = (temp->next)->next;
    free(tbDeltd);
    return;
}