#include <iostream>
using namespace std;
void findUnique(int *arr, int n){
    int res = 0;
    for(int i =0;i<n;i++) res = res ^ arr[i];
    int temp = res;
    int k =0;
    while(true){
        if((temp & 1) == 1){
            break;
        }
        k++;
    }

    for(int i =0;i<n)
}