// 1: Use Insertion Sort Algorithm to sort the array of integers in decreasing order.



#include <iostream>
using namespace std;

int main(){
    int arr[5] = {4,5,7,2,6};
    
    for(int i=1; i<5; i++){
        for(int j=i; j>0; j--){
            if(arr[j]>arr[j-1]){
                swap(arr[j], arr[j-1]);
            }else{
                break;
            }
        }
    }

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}