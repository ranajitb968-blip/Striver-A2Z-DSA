
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
    c=2*pi*r;
    cout<<"circle perimeter is : "<<c<<endl;
    cout<<"circle area is : "<<a<<endl;

}

Q)Write a program to convert specified days into years, weeks, and days.

#include<bits/stdc++.h>
using namespace std;
int main (){
    int days;
    int year;
    int weeks;

    cout<<"enter the days: "<<endl;
    cin>>days;

    year=days/365;
    weeks=days/7;

    cout<<"year and weeks is : "<<year<<endl;
    cout<<"weeks is : "<<weeks<<endl;

}

Q) abcd
   abcd
   abcd
   abcd


#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"ABCD";
            break;                 //i besically use this break veriable for duplicate line no print
        }
        cout<<endl;
    }
    return 0;
}

1234
1234
1234
1234

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    int n;
    cout<<"enter the number of line : "<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n+1;j++){
            cout<<"abcd";
            break;
        }
        cout<<endl;
    }

    return 0;
}

*
**
***
****
*****

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of line : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

this is same question using while loop just try .

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of line: ";
    cin>>n;
    int i=1;

    while(i<=n){
        cout<<"123";
        i++;
        cout << endl;
    }


    return 0;
}
q) function use how to use

#include<bits/stdc++.h>
using namespace std;
void mininum(int a, int b)
{
    if (a < b)
    {
        cout << "this number is minimum :" << a << endl;
    }
    else
    {
        cout << "this number is not minimum , it's a maximum number :" << b << endl;
    }
}
int main()
{
    int a, b;
    cout << "enter two number: ";
    cin >> a >> b;
    mininum(7, 5);

    return 0;
}

44. Write a program to print the day of the week name using a switch case.



#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter the day number (1-7): ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid day number" << endl;
    }

    return 0;
}

q) this is function use

#include<bits/stdc++.h>
using namespace std;

void ranajit(){
    cout<<"hello ranajit bera\n";
}
int main(){
    ranajit();
    ranajit();
    return 0;
}

Q)TWO SUM USING FUNCTION

#include<bits/stdc++.h>
using namespace std;
void ranajit(){
    int a , b , sum;
    float multiple;
    cout<<"enter the number: ";
    cin>>a>>b;

    sum=a+b;
    multiple=a*b;

    cout<<"output"<<sum<<endl;
    cout << "output" << multiple<< endl;
}
int main(){
    ranajit();
    return 0;
}


q) just using name with integer value try ...

#include<bits/stdc++.h>
using namespace std;
int hello(){
     cout<<"hello ranajit bera! "<<endl;

    return 45;
}
int main(){
    cout<<hello();
}


******************************************for loop question **********************************************
// 53.	Write a program to Print your name 20 times using a for loop, while loop and do while loop.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<" ranajit bera"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;
    while(i<=n){
        cout<<"ranajit bera"<<endl;
        i++;
    }

    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;
    do{
     cout<<"ranajit bera "<<endl;
     i++;
    }while(i<=n);
    return 0;
}

55.	Write a program to Calculate the Sum of 1 to 10 numbers using a for loop, while loop and do while loop.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=1;
    int n=10;
    int sum=0;
    for(int i=1;i<=n;i++){
     sum=sum+i;

     cout<<"sum is: "<<sum<<endl;
    }

    return 0;
}
// 5. Write a program to calculate the perimeter and area of a circle with a given radius.
#include <iostream>
    using namespace std;
int main()
{
    int radius;
    float area, perimeter;
    radius = 6;

    perimeter = (2 * 3.1416 * radius);
    area = (3.1416 * radius * radius);

    cout << "Perimeter of the Circle = " << perimeter << " inches\n";
    cout << "Area of the Circle = " << area << " square inches\n";

    return 0;
}

Q)224.	Write a program to find a cube of any number using a user-defined function.

#include<bits/stdc++.h>
using namespace std;
void cube(){
    int x;
    int n;
    cin>>n;
    x=n*n*n;

}
int main(){
    cube();
    int x;
    cout<<"cube is : "<<x<<endl;
}

Function to calculate the cube of a number
double cube(double num)
{
    return num * num * num;
}

int main()
{
    double number;

    cout << "Enter a number: ";
    cin >> number;

    double result = cube(number);

    cout << "Cube of " << number << " is " << result << endl;

    return 0;
}

*/
//Write a program to print a matrix using array.
#include <bits/stdc++.h>
using namespace std;
    int main()
{
    int num[3][3], i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << j + 1 << "\t";
        }
        cout << endl;
    }
    return 0;
}