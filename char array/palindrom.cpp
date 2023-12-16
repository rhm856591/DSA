#include <iostream>
#include <cstring>

using namespace std;

bool isPalindrome(char arr[], int size){ 
    int start = 0;
    int end = size - 1;
    while(start < end){
        if(arr[start] != arr[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main(){
    char arr[100];
    cout<<"Enter String that you can check palindrome: "<<endl;
    cin>>arr;
    int size = strlen(arr);
    if(isPalindrome(arr, size)){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not a palindrome" << endl;
    }
    return 0;
}
