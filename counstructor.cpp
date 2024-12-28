#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Bike{
public:
    int tyreSize;
    int EngineSize;

    Bike(int tyreSize){
        this->tyreSize = tyreSize;
        cout<<"coustructor call hua\n";
    }

};

int main(){
    // cout<<"nademihefh"<<endl;/
    Bike tvs(tyreSize:12);
    Bike honda(tyreSize:13);
    Bike Royal(tyreSize:15);
    cout<<tvs.tyreSize<<endl;
    cout<<honda.tyreSize<<endl;
    cout<<Royal.tyreSize<<endl;
}