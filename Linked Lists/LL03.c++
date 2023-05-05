#include <iostream>
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
void deleteDuplicateElements (Node* &head) {
    Node* current = head;
    while (current!=NULL && current->next!=NULL) {
        Node* temp = current->next;
        if(current->val == current->next->val) {
            current->next = current->next->next;
            free(temp);
            current = current->next;
        } else {
            current = current->next;
        }
    }
}

int main() {
    LinkedList ll;
    ll.insertAtTail(10);
    ll.Display();
    ll.insertAtTail(10);
    ll.Display();
    ll.insertAtTail(30);
    ll.Display();
    ll.insertAtTail(40);
    ll.Display();
    ll.insertAtTail(60);
    ll.Display();
    ll.insertAtTail(60);
    ll.Display();
    ll.insertAtTail(70);
    ll.Display();
    ll.insertAtTail(80);
    ll.Display();
    ll.insertAtTail(80);
    ll.Display();
    ll.insertAtTail(80);
    ll.Display();
    deleteDuplicateElements(ll.head);
    ll.Display();
    
    Node* Head = ll.head;
    deleteDuplicateElements(Head);
    ll.Display();
    cout<<"Hello!\n";
    
    return 0;
}
