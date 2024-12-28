#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;


    Student(){
        cout<<"Non-prarameterized\n";
    }

    Student(string name ){
        this->name = name;
        cout<<"Parameterized\n";
    }
};

int main(){
    Student s1("Tony Stark ");
    return 0;
};