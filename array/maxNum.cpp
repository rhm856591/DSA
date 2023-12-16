#include<iostream>
#include<climits>
using namespace std;

// code for maximum number

int maxNum(int arr[], int size){
    int maxNum = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>maxNum){
            maxNum = arr[i];
        }
    }
    return maxNum;
}

int main(){
    int arr[]={-1,-2,-3,-4,-5,-6,-7,-8,-9};
    int size = 9;

    int maxResult = maxNum(arr, size);

    cout<<"Maximum number is: "<<maxResult<<endl;
    // int max = INT_MIN;
    // for(int i=0; i<size; i++){
    //     if(arr[i]>max){
    //         max = arr[i];
    //     }
    // }
    // cout<<"Maximum number is: "<<max<<endl;
    return 0;
}

// Code for minimum number

// int minNum(int arr[],int size){
//     int minimum = INT_MAX;
//     for(int i=0; i<size; i++){
//         if(arr[i]<minimum){
//             minimum = arr[i];
//         }
//     }
//     return minimum;

// }

// int main(){
//     int arr[]={-2,-1,0,1,2,3,4,5,6,7,8,9};
//     int size = 12;
//     int minNum1 = minNum(arr ,size);
//     cout<<"Minimum number is: "<<minNum1<<endl;

//     // int minimum = INT_MAX;
//     // for(int i=0; i<size; i++){
//     //     if(arr[i]<minimum){
//     //         minimum = arr[i];
//     //     }
//     // }
//     // cout<<"Minimum number is: "<<minimum<<endl;
//     return 0;
// }