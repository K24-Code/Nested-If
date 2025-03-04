#include<iostream>
using namespace std;
int main(){
    int x, y, z;
    cout<<"enter three numbers: ";
    cin>> x >> y >> z;

    if(x>y){
        if (x>z){
            cout<<"the greatest number is "<< x;
        }
        else{
            cout<<"the greatest number is "<< z;
        }
    }
    else{
        if (y>z){
            cout<<"the greatest number is "<< y;
        }
        else{
            cout<<"the greatest number is "<< z;
        }
    }
    return 0;
}