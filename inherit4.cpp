#include <iostream>
#include <string>
using namespace std;
//hirarci Inheritence
class Person{
public:
    string name;
    int age;
}

class Student : public Person{
public:
    int rollno;

};

class Teacher : public Person{
public:
    string subject;
};



class TA  : public Student, public Teacher {

};

int main(){
    TA t1;
    t1.name = "Tony stark";
    t1.subject = "Engineering";

    cout<<t1.name << endl;
    cout<<t1.subject << endl;
    return 0;
}