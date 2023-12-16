#include<iostream>

using namespace std;

// int main(){
//     int num;
//     cin>>num;
//     for(int row=0; row<num; row++){
//         for(int space=0; space<num-row-1; space++){
//             cout<<" ";
//         }
//         for(int col=0; col<row+1; col++){
//             cout<<row+1<<" ";
//         }
//         cout<<endl;
//     }
// }

int main(){
    int num,number=1;
    cin>>num;
    for(int row=0; row<num; row++){
        for(int space=0; space<num-row-1; space++){
            cout<<" ";
        }
        for(int col=0; col<row+1; col++){
            cout<<number<<" ";
            number++;
        }
        cout<<endl;
    }
}