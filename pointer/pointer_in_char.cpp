#include<iostream>
using namespace std;

int main(){
    char ch[] = "raham";
    char* pt = ch;
    cout<< ch<<endl;
    cout<< &ch<< endl;
    cout<<pt<<endl;
    cout<< &pt<<endl;
    cout<< *pt<<endl;
    cout<< *(pt+3)<<endl;

    return 0;
}