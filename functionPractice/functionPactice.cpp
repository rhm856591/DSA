#include<iostream>
using namespace std;
// int n=5;
void prime(int num){
    // int n;
    // cin>>n;
    if(num%2==0){
        cout<<"Ture"<<endl;
    }else{
        cout<<"False"<<endl;
    }
}
void printTable(int a){
    for(int i=1; i<=10; i++){
        cout<<i<<" * "<<a<<"= "<<a*i<<endl;
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    prime(n);
    printTable(m);
}

