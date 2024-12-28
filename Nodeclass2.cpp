#include <iostream>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    cout<<a.next;
    cout<<&a<<endl;
    // forming
    a.next = &b;
    b.next = &c;
    c.next = &d;
    // cout<<(*(a.next)).val<<endl;
    // cout<<(b.next)->val<<endl;
    // cout<<(((a.next)->next)->next)->val;
    cout<<a.next->next->next->val;
    // Node temp = a;
    // while(temp.next!=NULL){
    //     cout<<temp.val<<" ";
    //     // temp = *(temp.next);
    //     temp = temp->next;
    // }
} 