#include<iostream>
using namespace std;

int findBinary(int num){
    int binary = 0;
    for(int i = 1; num > 0; i = i * 10){
        int lastDigit = num % 2;
        binary = binary + lastDigit * i;
        num = num / 2;
    }
    return binary;
}

int main(){
    int num;
    cout<<"Enter decimal number that convert into binary: "<<endl;
    cin>>num;
    int viewFind = findBinary(num);
    cout<<viewFind<<" Is binary of "<<num<<endl;

    return 0;
}