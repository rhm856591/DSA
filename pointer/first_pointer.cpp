#include<iostream>
using namespace std;

int main(){
    // int arr[10] = {1,2,3,4,5};
    int arr = 8;
    int* p = &arr;
    cout<< arr<<endl;
    cout<< &arr<< endl;
    cout<<p<<endl;
    cout<< &p<<endl;
    cout<< *p<<endl;
    // cout<< *(p+3)<<endl;

    return 0;
}