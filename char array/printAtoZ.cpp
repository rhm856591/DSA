#include<iostream>
using namespace std; 

int main (){
    char print;
    for(int i = 0; i < 26; i++){
        print = char('A'+i);
        cout<< print<<" ";
    }
    cout<<endl;
    for(int i = 0; i < 26; i++){
        print = char('a'+i);
        cout<< print<<" ";
    }
}
