#include <iostream>
#include <string>
using namespace std;

class Teacher{
private:
    string name;
    string dept;
    string subject;
    double salary;
public:
// non-parameterized
    Teacher(){
        // cout<<"Hi, I am coustructor\n";
        dept = "Electrical";
    }

    // paramiterized
    Teacher(string name,string dept,string subject,double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    Teacher(Teacher &orgobj){
        cout<<"I am custom copy coustructor...\n";
        this->name = orgobj.name;
        this->dept = orgobj.dept;
        this->subject = orgobj.subject;
        this->salary = orgobj.salary;

    }
    // string name;
    // string dept;
    // string subject;
    // double salary;

    void changeDept(string newDept){
        dept = newDept;
    }
     
    //  setter
    // void setSalary(double s){
    //     salary = s;
    // }

    // // getter 

    // double getSalary(){
    //     return salary;
    // }

    void getInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"subject : "<<subject<<endl;
    }

};


// class Account{
// private:
//     double balance;
//     string password;//data hiding 

// public:
//     string AccountID;
//     string username;
// }


int main(){
    Teacher t1("Yash","Electrical","c++",100000);
    // t1.getInfo();
    // t1.name = "Yash";
    // // t1.dept = "C";
    // // t1.subject = "Electrical";
    // t1.setSalary(10000);

    Teacher t2(t1);
    t2.getInfo();

    // // cout<<t1.name<<endl;
    // // cout<< t1.getSalary();
    // cout<<t1.dept<<endl;
    return 0;
}
