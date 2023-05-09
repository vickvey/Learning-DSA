//Implementation of singly linked list
#include <iostream>
using namespace std;
#define unk 10000

class Node {
    public:
        int val; //data in a Node
        Node* next; //address for the next Node
    public: 
        Node(): val(unk), next(NULL){}; //default constructor 
        Node(int val): val(val), next(NULL){}; //single parameter constructor
        Node(int val,Node* next): val(val), next(next){}; //double parameter constructor
        Node(Node* ptr): val(ptr->val), next(ptr->next){}; //copy constructor
        ~Node(){}; //destructor
};

class LinkedList: public Node{
    private:
        Node* head; //address for the head Node
    public:
        LinkedList(): head(NULL){}; //default constructor
        LinkedList(Node* head): head(head){}; //parametric constructor
        LinkedList(LinkedList* L): head(L->head){}; //copy constructor
        ~LinkedList(){}; //destructor
        //setter
        void set_head (Node* ptr){
            head = ptr;
        }
        //getter
        Node* get_head() {
            return head;
        }

        void InsertAtTail(int val);
        void InsertAtPosition(int, int);
        void InsertAtHead(int val);
        void DeleteAtTail();
        void DeleteAtPosition(int position);
        void DeleteAtHead();
        void Display();  
        void PrintReverse(Node* ptr);  
};

void LinkedList :: Display(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}
void LinkedList :: InsertAtTail (int data){
    Node* new_Node = new Node(data);
    if (head == NULL){
        head = new_Node;
    } else {
        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new_Node;    
    }
}
void LinkedList :: PrintReverse (Node* head){
    Node* temp = head;
    if (temp==NULL){
        return;
    } else {
        PrintReverse(temp->next);
        cout<<temp->val<<" ";
    }
}

int main(){
    Node* temp = new Node(10);
    LinkedList ll(temp);
    ll.Display();
    ll.InsertAtTail(20);
    ll.Display();
    ll.InsertAtTail(30);
    ll.Display();
    ll.InsertAtTail(40);
    ll.Display();
    ll.PrintReverse(ll.get_head());
    return 0;
}