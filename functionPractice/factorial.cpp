#include<iostream>
using namespace std;

int findFactorial(int num){
    int count=1;
    for(int i=1; i<=num; i++){
        // cout<<i<<" * ";
        if(i!=num){
            cout<<i<<"*";
        }
        else{
            cout<<i;
        }
        count= count*i;
        
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter the number that you find factorial"<<endl;
    cin>>n;

    int factorial = findFactorial(n);
    cout<<" = "<<factorial;


    return 0;
}