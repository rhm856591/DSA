#include<iostream>

using namespace std;
int main(){
    int num;
    cin>>num;
    for(int row=0; row<num; row++){
        for(int col=0; col<num-row; col++){
            cout<<"*";
        }
        // if(row==0){
        //     for(int col=0; col<2*row; col++){
        //         cout<<" ";
        //     }
        // }
        for(int col=0; col<2*row; col++){
                cout<<" ";
            }
        for(int col=0; col<num-row; col++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row=0; row<num; row++){
        for(int col=0; col<row+1; col++){
            cout<<"*";
        }
       
        // if(row==0){
        //     for(int col=0; col<2*row; col++){
        //         cout<<" ";
        //     }
        // }
        for(int col=0; col<2*num-2*row-2; col++){
                cout<<" ";
            }
        
        
        for(int col=0; col<row+1; col++){
            cout<<"*";
        }
        cout<<endl;
    }
}