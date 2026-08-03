/*
// Write a program to check whether a number is even or odd using functions.

#include <bits/stdc++.h>
using namespace std;
void eve_odd()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }
}

int main()
{
    eve_odd();

    return 0;
}

// Write a program to find cube of any number using function.

#include <bits/stdc++.h>
using namespace std;
void cube()
{
    int n;
    cin >> n;
    int cube = n * n * n;
    cout << "coube is : " << cube << endl;
}
int main()
{
    cube();
    return 0;
}


// 143.Write a program to find diameter, circumference, and area of circle.

#include <bits/stdc++.h>
    using namespace std;
void diameter_cir()
{
    const double pi = 3.14;
    int r;
    cin >> r;
    int diameter_cir = pi * r * r;
    cout << "coube is : " << diameter_cir << endl;
}
int main()
{
    diameter_cir();
    return 0;
}

//square problem function in c++
#include <bits/stdc++.h>
using namespace std;
int square(int n){
     return n*n;
}
int main(){
    int results;
    results=square(5);
    cout<<"square is :"<<results<<endl;
    return 0;
}


// Write a program to find the multiple of two numbers using function.
#include <bits/stdc++.h>
using namespace std;
void wellcome(){
    cout<<"wellcome to function program"<<endl;
}

int multiple(int a , int b){
   return a*b;
}
int main(){
    wellcome();
    int results;
    results=multiple(5,7);
    cout<<"multiple is :"<<results<<endl;
}



// Parameters or Arguments in function in c++
#include <bits/stdc++.h>
using namespace std;
int printnum(int n){
    cout<< n << endl;
}
int main(){
    int num1=10;
    int num2=20;

    printnum(num1);
    printnum(num2);
    return 0;
}


// update cube
#include<iostream>
using namespace std;
int cube(int a){
return a*a*a;
}
int main(){
    int results;
    results=cube(5);
    cout<<"cube is : "<<results<<endl;
    return 0;
}


//update even odd must cheack
#include <iostream>
using namespace std;
int even_odd(int a)
{
    if(a%2==0){
        cout<<"even number";
    }else{
        cout<<"odd number ";
    }
}
int main()
{
    int results;
    results = even_odd(6);
    cout << results;
    return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;

class Car
{
public:
    // Attribute
    string color;
    string model;

    // Method
    void startEngine()
    {
        cout << "Engine started" << endl;
    }
};