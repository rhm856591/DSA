#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int> arr, int target){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start <= end){
        
        if(arr[mid]==target){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;

    }
    // mid = start + (end-start)/2;
    return ans;
}

// last Occurrence of a number in a sorted array
int lastOcc(vector<int> arr, int target){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start <= end){
        
        if(arr[mid]==target){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;

    }
    // mid = start + (end-start)/2;
    return ans;
}

// int findIndex(int lastOcc, int firstOcc){
//     return lastOcc - firstOcc + 1;
// }

int main(){
    int size,target;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;
    vector<int> arr(size,1);
    cout<<"Enter the element of array: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
    cout<<"Enter the target value: "<<endl;
    cin>>target;
    int firstIndex = firstOcc(arr, target);
    int lastIndex = lastOcc(arr, target);
    // int index = findIndex(arr , target);
    cout<<"Total number of repeating in array: "<<lastIndex - firstIndex + 1 <<endl;
}