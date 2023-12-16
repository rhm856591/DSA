#include<iostream>

using namespace std;

// This is for half pyramid

// int main(){
//     int num;
//     cin>>num;
//     // outter loop
//     for(int row=0; row<num; row++){
//         // inner loop
//         for(int col=0; col<row+1; col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// this is inverted half pyramid

int main(){
    int num;
    cin>>num;
    // outter loop
    for(int row=0; row<num; row++){
        // inner loop
        for(int col=0; col<num-row; col++){
            cout<<"*";
        }
        cout<<endl;
    }
}