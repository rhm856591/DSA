#include<iostream>
#include<vector>

using namespace std;

int main(){
    int num;
    cout<<"Enter size vector : "<<endl;
    cin>>num;
    vector<int> arr(num,101);
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
        // arr.push_back(arr[i]);
    }
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    cout<<endl;
}