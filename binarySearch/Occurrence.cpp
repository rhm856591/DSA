#include<iostream>
#include<vector>
using namespace std;

// First Occurrence of a number in a sorted array
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

// Driver Code
int main(){
    int num,target;
    cout<<"Enter the size of array: "<<endl;
    cin>>num;
    vector<int> arr (num, 1);
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
    cout<<"Enter the target: "<<endl;
    cin>>target;

    int indexFirstOcc=firstOcc(arr, target);
    cout<<"First Occurrence index: "<<indexFirstOcc<<endl;
    int indexLastOcc=lastOcc(arr, target);
    cout<<"Last Occurrence index: "<<indexLastOcc<<endl;
}