#include<iostream>
using namespace std;
int main () {
    int height, weight;
    cout<<"enter your height in feet: ";
    cin>>height;

    cout<<"enter your weight in kg: ";
    cin>>weight;

    if(height>5){
        if(weight>70){
            cout<<"YOUR BMI IS GOOD "<<endl;
        }
        else{
            cout<<"BHAI TUJHSE NAA HO PAYEGA "<<endl;
        }
    }
    else{
        cout<<"BHAI COMPLAIN LAKAR DU "<<endl;
    }
    return 0;
}