#include<iostream>

using namespace std;

int main(){
    int arr[] = {2,5,3,6,4,1,7};
    int size = 7;
    int countSwap = 0; //for the optemize the code in best case O(n) 
    for(int i = 1; i<size; i++){
        for(int j = 0; j<size-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
                countSwap++;
            }
        }
        if(countSwap == 0){
        break;
        }
    }
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}