#include<iostream>

using namespace std;

void convertIntoUppercase(char arr[]){
    int size = strlen(arr);
    for(int i=0; i<size; i++){
        arr[i] = arr[i] -'a'+'A';
    }
}
void converintoLowerCase(char arr1[]){
    int size = strlen(arr1);
    for(int i = 0; i < size; i++){
        arr1[i] = arr1[i] - 'A'+'a';
    }
}

int main(){
    char arr[100];
    cout<<"Enter element that you want to change in upper case: "<<endl;
    cin>>arr;
    int size = strlen(arr);
    convertIntoUppercase(arr);
    cout<<arr<<endl;

    char arr1[100];
    cout<<"Enter element that you want to change in lower case: "<<endl;
    cin>>arr1;
    converintoLowerCase(arr1);
    cout<<arr1;
}