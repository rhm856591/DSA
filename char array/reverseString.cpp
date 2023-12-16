#include <iostream>
#include <cstring>

using namespace std;

void findReverse(char arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    char arr[100];
    cout<<"Enter string that you want reverse: "<<endl;
    cin.getline(arr , 100);
    int size = strlen(arr);
    cout<<size<<arr;
    findReverse(arr,size);
    cout << "Reversed string: " << arr << endl;
    return 0;
}
