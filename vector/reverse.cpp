#include<iostream>
#include<vector>
using namespace std;

int main(){
    int num;
    cin>>num;
    vector<int> arr(num,1);

    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int start=0,end=num-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }



}