#include<iostream>

using namespace std;
int main(){
    int num,number=1;
    cin>>num;
    for(int row=0; row<num; row++){
        for(int col=0; col<row+1; col++){
            cout<<number<<" ";
            number++;
        }
        cout<<endl;
    }
}