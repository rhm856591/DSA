#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{1,2,3,4,5};
    int sum = 12;
    for(int i=0; i<arr.size(); i++){
        int element1 = arr[i];
        for(int j=i+1; j<arr.size(); j++){
            int element2 = arr[j];
            for(int k=j+1; k<arr.size(); k++){
                int element3 = arr[k];
                for(int x=k+1; x<arr.size(); x++){
                    if(element1+element2+element3+arr[x]==sum){
                        cout<<"("<<element1<<","<<element2<<","<<element3<<","<<arr[x]<<")"<<" = "<<sum<<endl;
                    }
                }
            }
        }
    }
}