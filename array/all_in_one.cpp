#include<iostream>
using namespace std;

int inputOutpur(int arr[], int size){
    cout<<"Enter array element : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Output : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout <<endl;
    return 0;
}

int Linearsaerch(int arr[],int size){
    cout<<"Linear Saerch : "<<endl;
    int x;
    bool found = 0;
    cout<<"Enter number that you fonud : ";
    cin>>x;
    for(int i=0; i<size; i++){
        if(arr[i]==x){
            cout<<"Found on "<<i<<" Index"<<endl;
            found = 1;
            break;
        }
    }
    if(!found){
        cout<<"Not found"<<endl;
    }

    return 0;

}

int sum0sand1s(int arr[], int size){
    cout<<"Sum of 0's and 1's : "<<endl;
    int one=0,zero=0;
    for(int i=0; i<size; i++){
        if(arr[i]==1){
            one++;
        }
        if(arr[i]==0){
            zero++;
        }
    }
    cout<<"Total Zero's : "<<zero<<endl;
    cout<<"Total one's : "<<one<<endl;

    return 0;
}

int Double(int arr[], int size){
    cout<<"Double Function : "<<endl;
    for(int i=0; i<size; i++){
        cout<<2*arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size];
    inputOutpur(arr,size);
    Linearsaerch(arr,size);
    sum0sand1s(arr,size);
    Double(arr,size);
    
    
    return 0;
}


