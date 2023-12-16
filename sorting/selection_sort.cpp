#include<iostream>

using namespace std;

int main(){
    int arr[] = {5,3,2,4,1,6};
    int n = 6;
    int min_val;
    for(int i=0; i<n; i++){
        min_val=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min_val])
                min_val = j;
        }
        swap(arr[min_val], arr[i]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}