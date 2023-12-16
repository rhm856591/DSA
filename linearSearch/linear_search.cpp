#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,7,4,5};
    int n = 5;
    // int val=3;
    // for(int i =0; i<n; i++){
    //     if(arr[i] == val){
    //         cout<<i<<" ";
    //     }
    // }
    bool sort = true;
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            sort = false;
            break;
        }
    }
    if(sort){
        cout<<"sorted";
    }else{
        cout<<"not sorted";
    }

    return 0;
}

