#include<iostream>

using namespace std;
int main(){
    int num;
    cin>>num;
    // outter loop
    for(int row=0; row<num; row++){
        // space loop
        for(int space=0; space<=row; space++){
            cout<<" ";
        }
        // inner loop
        for(int col=0; col<num-row; col++){
            cout<<"*";
        }
        cout<<endl;
    }
}