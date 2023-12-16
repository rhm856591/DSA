#include<iostream>
#include<vector>

using namespace std;

int findShiftleft(int num, int shift){
    int leftShift = num << shift; 
    return leftShift;
}
int findShiftright(int num, int shift){
    int rightShift = num >> shift; 
    return rightShift;
}

int main(){
    int num, shift;
    cout<<"Enter number that shift: "<<endl;
    cin>>num;
    cout<<"Enter shift: "<<endl;
    cin>>shift;
    int viewLeft = findShiftleft(num, shift);
    cout<<viewLeft<<" Is Left shift "<<num<<endl;
    int viewRight = findShiftright(num, shift);
    cout<<viewRight<<" Is Rigth shift "<<num<<endl;
}