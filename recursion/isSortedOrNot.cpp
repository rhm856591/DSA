#include<iostream>
#include<vector>
using namespace std;

bool isSorted(const vector<int>& arr, int n) {
    // Base case: If the array has one or zero elements, it is considered sorted
    if (n <= 1) {
        return true;
    }

    // Recursive case: Check if the last element is greater than or equal to the previous elements
    if (arr[n - 1] < arr[n - 2]) {
        return false;
    }

    // Recursively check the sub-array excluding the last element
    return isSorted(arr, n - 1);
}

int main() {
    vector<int> arr{1, 2, 3, 4, 5};
    int n = arr.size();

    bool sorted = isSorted(arr, n);

    if (sorted) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}
