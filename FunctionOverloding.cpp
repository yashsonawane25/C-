#include <iostream>
#include <string>
using namespace std;

class Parent {
public:
    getInfo(){
        cout<<"Parant class\n";
    }

    virtual void hello(){
        cout<<"Hello form par\n";
    }
};

class Child : public Parent {
public:
    getInfo(){
        cout<<"Child Class\n";
    }

    void hello(){
        cout<<"Hello form child\n";
    }
};

int main(){
    Child c1;
    c1.hello();
}