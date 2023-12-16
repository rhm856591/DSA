#include<iostream>
using namespace std;


int main(){
    // int arr[]={0,0,1,0,1,0,1,1,0,0};
    // int size=10;
    // int one=0, zero=0;
    // for(int i=0; i<size; i++){
    //     if(arr[i]==0){
    //         zero++;
    //     }
    //     if(arr[i]==1){
    //         one++;
    //     }
    // }
    // cout<<"Total Zero's : "<<zero<<endl;
    // cout<<"Total one's : "<<one<<endl;
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter array element : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Output : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int one=0, zero=0;
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            zero++;
        }
        if(arr[i]==1){
            one++;
        }
    }
    cout<<"Total Zero's : "<<zero<<endl;
    cout<<"Total one's : "<<one<<endl;


    return 0;
}