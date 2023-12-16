#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    cout<<"Enter your name: "<<endl;
    getline(cin, name);

    int size = name.length();
    int size1 = name.size();
    cout<<"Your name is "<<name<<" & size is "<<size1<<endl;
    

}