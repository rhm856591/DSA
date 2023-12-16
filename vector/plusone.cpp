#include<iostream>

using namespace std;

int main(){
    int arr[3]={1,2,5};
    int size=3;
    arr[size-1] +=1;
    for(int i=0; i<size; i++){
        cout<<arr[i];
    } 
}