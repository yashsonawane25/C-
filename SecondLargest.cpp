#include<iostream>
using namespace std;
int findSecondLarger(const int arr[],int size){
    int FistLargest = arr[0];
    int SecondLargest = arr[1];
    if(FistLargest<SecondLargest){
        swap(FistLargest,SecondLargest);
    }
    for(int i=2;i<size;++i){
        if(arr[i]>FistLargest){
            SecondLargest = FistLargest;
            FistLargest  = arr[i];
        }else if (arr[i]>SecondLargest && arr[i] < FistLargest){
            SecondLargest = arr[i];
        }
    }
    return SecondLargest;
}
int main(){
    const int size = 5;
    int arr[size];
    cout<<"Enter "<<size<<"Element of the array:"<<endl;
    for(int i=0;i<size;++i){
        cout<<"Enter "<<i+1<<" ";
        cin>>arr[i];
    }
    int SecondLargest =findSecondLarger(arr,size);
    cout<<"Second largest element in the array:"<<SecondLargest<<endl;
    return 0;
}