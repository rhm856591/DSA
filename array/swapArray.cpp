#include<iostream>
using namespace std;

void swapFunction(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0; i<size; i++){
        if(i!=size-1)
            cout<<arr[i]<<",";
        else
            cout<<arr[i];
    }
}

int main(){
    int arr[] = {10,20,30,40,50,60,70,80};
    int size=8;
    swapFunction(arr, size);

    return 0;
}