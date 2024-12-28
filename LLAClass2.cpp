#include <iostream>
using namespace std;

class Node {  // user-defined data type
public:
    int val;
    Node* next;
    
    Node(int val) {
        this->val = val;
        this->next = NULL;  // Fixed colon to semicolon
    }
};

class LinkedList {
    Node* head;
    Node* tail;
    int size;

public:  // Added public access specifier
    LinkedList() {
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val) {
        Node* temp = new Node(val);
        if (size == 0) {
            head = tail = temp;  // Fixed typo from "templ" to "temp"
        } else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    
    void insertAthead(int val) {
        Node* temp = new Node(val);
        if (size == 0) {
            head = tail = temp;  // Fixed typo from "templ" to "temp"
        } else {
            tail->next = head;
            head = temp;

        }
        size++;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.display();  // Added missing semicolon
    ll.insertAtEnd(20);
    ll.display();
    
    ll.insertAthead(50);
    ll.display();
    return 0;
}
