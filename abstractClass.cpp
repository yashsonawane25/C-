#include <iostream>
#include <string>
using namespace std;

class Shape {
    virtual void draw() = 0; //pure virtual fucntion
};

class Circle : public Shape {
public:
    void draw() {
        cout<<"Drawing a circle\n";
    }
};

int main(){
    Circle c1;
    c1.draw();
    return 0;
};