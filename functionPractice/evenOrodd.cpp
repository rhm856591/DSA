#include<iostream>
using namespace std;
int checkfunction(int num){
    if(num%2==0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int num;
    cout<<"Enter the number to check Even Or Odd"<<endl;
    cin>>num;
    int result = checkfunction(num);
    cout<<result;
    return 0;
}