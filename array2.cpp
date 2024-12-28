#include <iostream>
#include <vector>
using namespace std;
int main(){
    // vector<int> a= {1,2,3,4,5,6,7,8};
    // for(int i:a){
    //     cout<<i<<endl;
    // }

    // for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<" ";
    // }
        // OR
    int i = 50;
    vector<int> v;
    while(i > 0){
        v.push_back(i--);
    }
    i = 0;
    while(i<v.size()){
        cout<<v[i]<<" ";
        i++;
    }
}