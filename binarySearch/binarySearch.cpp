#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int target){
    int start = 0;
    int end = arr.size()-1;
    int mid= start + (end-start)/2;
    while(start <= end){
        mid = start + (end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}

int main(){
    int size,target;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;
    vector<int> arr (size, 1);
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
    cout<<"Enter the target: "<<endl;
    cin>>target;
    int indexSearch = binarySearch(arr, target);
    if(indexSearch==-1){
        cout<<"Target not found"<<endl;
    }
    else{
        cout<<"Target found at index: "<<indexSearch<<endl;
    }

}