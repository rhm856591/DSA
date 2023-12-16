#include<iostream>
using namespace std;

float RadiusOfCirle(float num){
    float Area=2*num*3.14;
    // cout<<"Area of Cirle "<<num<<" is "<<Area<<endl;
    return Area;
}

int main(){
    float radius;
    cout<<"Enter the radius of Circle: ";
    cin>>radius;

    float area=RadiusOfCirle(radius);
    cout<<area;

    return 0;
}