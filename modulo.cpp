#include <iostream>
#include <climits>
using namespace std;
int main(){
    long long int x = INT_MAX;
    cout<<x<<endl;
    cout<<(x%5 | 2%5)%5 <<"\n";
    return 0;
}