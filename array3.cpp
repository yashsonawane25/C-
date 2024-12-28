#include <iostream>
using namespace std;
int calsum(const int arr[],int size){
    int sum =0;
    for(int i= 0;i<size;++i){
        sum +=arr[i];
    }
    return sum;
}
int main(){
    int size = 8;
    int arr[size];
    // cout<<"Enter Number of array: "<<size<<endl;
    // cin>>size;
    cout<<"Enter "<<size<<"Enter array: "<<endl;
    for(int i=0;i<size;++i){
        cout<<"Element" <<i + 1<<" : ";
        cin>>arr[i];
    }
    int sum = calsum(arr,size);
    cout<<"Sum of element :"<<sum<<endl;
    return 0;
}