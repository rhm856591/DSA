#include<iostream>

using namespace std;

int main(){
    int row,col;
    cout<<"Enter row: "<<endl;
    cin>>row;
    cout<<"Enter col: "<<endl;
    cin>>col;
    int arr[row][col];
    int sizeOfrow = row;
    int sizeOfcol = col;
    cout<<"Enter the array element: "<<endl;
    for(int row=0; row<sizeOfrow; row++){
        for(int col=0; col<sizeOfcol; col++){
            cin>>arr[row][col];
        }
    }
    cout<<"Output of your array: "<<endl;
    for(int row=0; row<sizeOfrow; row++){
        for(int col=0; col<sizeOfcol; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    int x;
    cout<<"Enter number that you want to find in 2D array: "<<endl;
    cin>>x;
    for(int row=0; row<sizeOfrow; row++){
        for(int col=0; col<sizeOfcol; col++){
            if(arr[row][col]==x){
                cout<<"Element found at row "<<row<<" and col "<<col<<endl;
            }
        }
    }
}