#include<iostream>
#include<vector>
using namespace std;

int main(){

    int num,k;
    cout<<"Enter the size of array "<<endl;
    cin>>num;
    vector<int> arr(num, 1);
    cout<<"Enter the element of array "<<endl;
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
    reverse(arr.begin(), arr.end());
    cout<<"Enter those index where you want to reverse "<<endl;
    cin>>k;

    //simple reverse
    // for(int i=0; i<arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }

    // spcific position k
    for(int i=k; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    // for(int i=0; i<arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }


    return 0;
}