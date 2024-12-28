#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    double* cgpaptr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaptr = new double;
        *cgpaPtr = cgpa;

    }
    Student(Student &obj){
        this->name = obj.name;
        this->cgpaptr = obj.cgpaptr;
    }

    void getInfo(){
        cout<<"name : "<<name<<endl<<" cgpa : "<<*cgpaptr<<endl;
    }
}

int main(){
    Student s1("Rahul kumar",8.9);

    Student s2(s1);
    s2.getInfo();
    return 0;
}