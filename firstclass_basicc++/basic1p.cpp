
/*this is problem statement are basic or operators problem
q) write a program to print your name,date of birth and mobile number

#include<bits/stdc++.h>
using namespace std;
int main(){
    int phone_number;
    string name;
    int dob;

    cout<<"my phone_number is : 9609794466"<<endl;
    cout<<"my name is : Ranajit bera"<<endl;
    cout<<"my date of birth is : 29/09/2005"<<endl;
    return 0;
}

q) write a progrma to enter length and breadth of a rectangle and finish its perimeter
firstly you must be know that rectangle perimeter law 𝑃=2×(𝑙+𝑤)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int l;
    int p;
    int w;

    cin>>l;
    cin>>w;
    p = 2*(l+w);

    cout<<"A rectangle perimeter is:" <<p <<endl;
}

q)write a progrma to enter length and breadth of a rectangle and finish its area.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int l;
    int w;

    cin>>l;
    cin>>w;
    a=(l*w);
    cout<<"A rectangle area is : "<<a<<endl;
}

Q) Write a Program to calculate area of an equilateral triangle.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    int d;


    cout<<"enter the value of a : "<<endl;
    cin>>a;
    cout<<"enter the value of b: "<<endl;
    cin>>b;
    cout<<"enter the value of c"<<endl;
    cin>>c;
    d = a+b+c;
    cout<<"your equilateral triangle is : "<<d<<endl;
}

Q)    Write a program to compute the perimeter and area of a circle with a given radius

FIRSTly this problem solve you must be know that formula of circle  Perimeter (Circumference): \(C = 2 \pi r\)    Area: \(A = \pi r^2\)
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int c;
    float a;
    int r;
    double const pi=3.14;
   

    cin>>c;
    cin>>r;

    a= pi*r*r;
    cout<<"circle area is : "<<a<<endl;



}
