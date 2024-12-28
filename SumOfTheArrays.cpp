#include<iostream>
using namespace std;
int main(){
    int calculateSum(const int arr[],int size){
        int sum=0;
        for(int i=0;i<size;i++){
            sum+=arr[i];
        }
        return sum;
    }
    int main(){
        const int size =5;
        int arr[size];
        cout<<"Enter"<<size<<"Element of the array: "<<endl;
        for(int i=0;i<size;i++){
            cout<<"Element"<<i+1<<": ";
            cin>>arr[i];
        }
        int sum = calculateSum(arr,size);
        cout<<"sum of elements in the array:"<<sum<<endl;
        return 0;
    }
}