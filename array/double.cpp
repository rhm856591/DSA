#include<iostream>

using namespace std;
int main(){
    int arr[1000],n,x;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    cout<<"Enter array element: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Here is your output: "<<endl;
    for(int i=0; i<n; i++){
        if(arr[i]/arr[i]){
            cout<<arr[i]<<" ";
        }
    }
    // cout<<endl<<"Enter number that you found: "<<endl;
    // cin>>x;
    // for(int i=0; i<n; i++){
    //     if(arr[i]==x){
    //         cout<<&arr[i];
    //     }
    // }
    return 0;
}