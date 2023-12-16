#include<iostream>
#include<math.h>
using namespace std;

int power(int n, int m) {
    if (m == 0) {
        return 1;  // Base case: any number to the power of 0 is 1
    }
    int ans = n * power(n, m - 1);  // Recursive calculation
    return ans;
}

int main() {
    int n, m; 
    cout << "Enter the number for the square : " << endl; 
    cin >> n; 
    cout << "Enter the power for the square : " << endl;
    cin >> m;

    int ans = power(n, m);
    cout << "The result of " << n << " raised to the power of " << m << " is: " << ans;

    return 0;
}
