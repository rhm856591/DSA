#include <iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int> arr, int s, int e, int key){
    // base case
    if(s>e)
        return -1;
        
    int mid = s+(e-s)/2;
    // ek case hum solve karnegye aage recursion sabhal lega
    if(arr[mid] == key)
        return mid;
        
    // recursion
    if(arr[mid] < key){
        int val = binarySearch(arr, mid+1, e, key );
        return val;
    }else{
        int val = binarySearch(arr, s, mid-1, key );
        return val;
    }
}

int main()
{
    vector<int> arr{10,20,30,40,50,60,70,80,90,99};
    int key = 10;
    int n = arr.size();
    int s = 0; 
    int e = n-1;
    
    int ans = binarySearch(arr, s, e, key);
    if(ans == -1){
        cout<<"Index is not found"<<endl;
    }else{
        cout<<"Index is : "<<ans<<endl;
    }
    return 0;
}