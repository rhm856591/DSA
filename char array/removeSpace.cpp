#include<iostream>
#include<string>

using namespace std;

void removeSpace(char arr[], int size){
    for(int i =0; i<size; i++){
        if(arr[i] == ' '){
            arr[i] = '@';
        }
    }
}

int main(){
    char arr[100];
    cout<<"Enter sentence : "<<endl;
    cin.getline(arr , 100);
    int size = strlen(arr);
    removeSpace(arr, size);
    cout<<arr;
    return 0;
}