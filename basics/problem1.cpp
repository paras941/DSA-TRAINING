//  Write a program to calculate average of three integers. 
//  Numbers are given by the user.

#include<iostream>
using namespace std;

int main (){
    int a,b,c;
    cout<<" Enter the first number"<<endl;
    cin>>a;
    cout<<" Enter the Second number"<<endl;
    cin>>b;
    cout<<" Enter the Third number"<<endl;
    cin>>c;

    int sum= a+b+c;
    int avg = sum/3;
    cout<<" Average of three number are "<< avg<<endl;
return 0;
}