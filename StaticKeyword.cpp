#include <iostream>
#include <string>
using namespace std;

void func(){
    static int x = 0;
    cout<<"X : "<<x<<endl;
    x++;
}

int main(){
    func();
    func();
    func();
    func();
    return 0;
}