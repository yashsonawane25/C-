#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;


};

class Student : public Person{
public:
    int rollno;

};

class GradStudent  : public Student {
public:
    string reseasrchArea;
};

int main(){
    GradStudent s1;
    s1.name = "Tony stark";
    s1.reseasrchArea = "Quantum Physics";
    cout<< s1.name << endl;
    cout<< s1.reseasrchArea << endl;
    return 0;
}