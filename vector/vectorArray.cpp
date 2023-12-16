#include<iostream>
#include<vector>
#define MAX_SIZE = 100;
using namespace std;

int findArrayElement(vector<vector<int> > arr, int target, int n, int m){
    for(int row=0; row<n; row++){
        for(int col=0; col<m; col++){
            if(arr[row][col] == target){
                cout<<"Your elemnt is found in row "<<row<< " & col is" <<" "<<col;
            }
        }
        cout<<endl;
    }
    return -1;
}


int main(){
    int n,m,target;
    cout<<"Enter number of row: "<<endl;
    cin>>n;
    cout<<"Enter number of col: "<<endl;
    cin>>m;
    vector<vector<int> > arr(n, vector<int> (m));
    cout<<"Enter the element of array: "<<endl;
    for(int row=0; row<n; row++){
        for(int col=0; col<m; col++){
            cin>>arr[row][col];
        }
    }
    cout<<"Here is your array output: "<<endl;
    for(int row=0; row<n; row++){
        for(int col=0; col<m; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the target element: "<<endl;
    cin>>target;

    findArrayElement(arr, target, n, m);

}