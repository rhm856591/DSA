#include<iostream>

using namespace std;

bool isPrime(int n){
    for(int i=2; i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

// void checkPrime(int n){
//     for(int i=2; i<=n; i++){
//         if(isPrime(i)){
//             cout<<i<<" ";
//         }
//     }

//     // bool isiPrime = isPrime(n);
//     // if(isiPrime){
//     //     cout<<"Prime";
//     // }else{
//     //     cout<<"Not Prime";
//     // }
// }

int main(){
    int num;
    cin>>num;

    // checkPrime(num);

    // bool isiprime=isPrime(num);
    // if(isiprime){
    //     cout<<"Prime";
    // }
    // else{
    //     cout<<"Not prime";
    // }
    
    for(int i=2; i<=num; i++){
        bool isiprime = isPrime(i);
        if(isiprime){
            cout<<i<<" ";
        }
    }

    return 0;
}