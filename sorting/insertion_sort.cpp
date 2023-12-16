#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {3,5,1,8,2,4};
    int size= 6;

    for(int round=1; round<size; round++){
        int val = arr[round];
        int j=round-1;
        for(; j>=0; j--){
            if(arr[j]>val){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=val;
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
    
}

// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     int arr{3, 5, 1, 8, 2, 4};
//     int size = 6;

//     for (int round = 1; round < size; round++) {
//         int val = arr[round];
//         int j = round - 1;

//         while (j >= 0) {
//             if (arr[j] > val) {
//                 arr[j + 1] = arr[j];
//                 j--;
//             } else {
//                 break;
//             }
//         }

//         arr[j + 1] = val;
//     }

//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
