#include<iostream>
using namespace std;

int factorial(int n){
    // base condition
    if(n==1){
        return 1;
    }

    int ans = n * factorial(n-1);

    return ans;

}

int main()
{
    int n;
    cout<<"Enter the number for factorial : "<<endl;
    cin>>n;
    int ans = factorial(n);

    cout<<"The factorial of "<< n<< " is equal to:: "<<ans<<endl;

    return 0;
}