#include<iostream>

using namespace std;

int main(){
    int num;
    cin>>num;
    // outter loop
    for(int row=0; row<num; row++){
        // for space
        for(int space=0; space<num-(row+1); space++){
            cout<<" ";
        }
        // for star
        for(int star=0; star<row+1; star++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int row=0; row<num; row++){
        // for space
        for(int space=0; space<row; space++){
            cout<<" ";
        }
        // for star
        for(int star=0; star<num-row; star++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// int main(){
//     int num;
//     cin>>num;
//     for(int row=0; row<num; row++){
//         for(int space1=0; space1<num-row-1; space1++){
//             cout<<" ";
//         }
//         for(int star1=0; star1<row+1; star1++){
//             cout<<"* ";
//         }
//         for(int star1=0; star1<num-row; star1++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }