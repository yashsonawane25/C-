#include <iostream>
using namespace std;
class Node{//user difined data type
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL:
    }
};
class LinkedList{
    Node* head = NULL:
    Node* tail = NULL;
    int size = 0;
    LinkedList(){
        head  = tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = templ;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
}


int main(){
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.display()
    ll.insertAtEnd(20);
    ll.display();
}