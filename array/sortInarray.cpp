#include<iostream>
#include<algorithm>

using namespace std;

void findArray(int arr[], int size){
    sort(arr, arr+size);
    cout<<"Sorted Array: "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int num;
    cout<<"Enter array size: "<<endl;
    cin>>num;
    int arr[num];
    int size = num;
    cout<<"Enter array element: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    findArray(arr, size);

    return 0;
}