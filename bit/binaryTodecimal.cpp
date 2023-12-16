#include<iostream>
using namespace std;

int findDecimal(int num){
    int decimal = 0;
    int base = 1;
    for(int i = num; i > 0; i = i / 10){
        int lastDigit = i % 10;
        decimal = decimal + lastDigit * base;
        base = base * 2;
    }
    return decimal;
}

int main(){
    int num;
    cout<<"Enter binary number that convert into : "<<endl;
    cin>>num;
    int viewFind = findDecimal(num);
    cout<<viewFind<<" Is decimal of "<<num<<endl;

    return 0;
}