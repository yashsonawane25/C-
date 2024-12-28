#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {1,4,5,8};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    vector<int> a(arr,arr+n1);
    int brr[] = {2,3,6,7,10,12};
    int n2 = sizeof(brr)/sizeof(brr[0]);
    vector<int> b(brr,brr+n2);
    vector<int> res(n1+n2);
    merge(a,b,res);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}