#include<iostream>
using namespace std;
int main(){
  int num;
  cin>>num;
  for(int row=0; row<num; row++){
    for(int col=0; col<num-row; col++){
    //   cout<<"*";
    if(row==0 || row==num-col-1 || col==0){
        cout<<"*";
    }else{
        cout<<" ";
    }
    }
    cout<<endl;
  }
}