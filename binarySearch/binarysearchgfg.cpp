//{ Driver Code Starts
#include<iostream>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(int arr[], int n, int k) {
	    // code here
	    for(int i=1; i<=n; i++){
	        if(k == arr[i]){
	            return i;
	        }
	    }
	    return -1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, k;
        cin >> n >> k;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.search(a, n, k);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends