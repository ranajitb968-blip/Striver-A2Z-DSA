/*1. Take a number and print whether it’s positive, negative, or zero.*/

#include<bits/stdc++.h>
using namespace std;

int main (){
    int number;

    cout<<"take a number where i check this number is positive , negative or zero: ";
    cin>>number;

    if(number > 0){
        cout<<"number is positive ";
    }else if(number < 0){
        cout<<"number is negative";
    }else{
        cout<<"number is zero";
    }


    return 0;
}