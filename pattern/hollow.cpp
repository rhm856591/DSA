#include<iostream>
using namespace std;
int main(){
    int rowCount,colCount;
    cin>>rowCount>>colCount;
    // outter loop
    for(int row=0; row<rowCount; row++){
        if(row==0 || row==rowCount-1){
            for(int col=0; col<colCount; col++){
                cout<<"* ";
            }
        }else{
            cout<<"* ";
            for(int col=0; col<colCount-2; col++){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
}