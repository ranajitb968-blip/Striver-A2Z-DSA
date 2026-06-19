/*
    This is the first program of C++ language. In this program we will print some text on the console.
    This is a very basic program and it is used to understand the basic structure of a C++ program.
    The main function is the entry point of the program and it is where the execution of the program starts.
    The std::cout is used to print the text on the console and std::endl is used to move the cursor to the next line.

#include<iostream>
int main(){
    std::cout<<"hi ranajit"<<std::endl;
    std::cout<<"hi dsa you are the best friend of mind"<<std::endl;
    return 0;
}
    In this program we are taking input from the user and then printing the value of x on the console.
    The std::cin is used to take input from the user and it is used to read the value of x from the console.
    The std::cout is used to print the value of x on the console.

#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    cout<<"value of x is: "<<x;
    return 0;
}

    *In this program we are taking input from the user and then printing the sum of x and y on the console.
    The std::cin is used to take input from the user and it is used to read the value of x and y from the console.
    The std::cout is used to print the sum of x and y on the console.

#include<iostream>
using namespace std;
int main(){
    int x;
    int y;

    cout<<"enter the value of x: ";
    cin>>x;
    cout<<"enter the value of y:";
    cin>>y;

    cout<<"value sum is :"<<x+y;

    return 0;
}


q) Write a program to print your name, date of birth and mobile number.

#include<iostream>
using namespace std;

int main(){
    cout<<"my name is : ranajit bera "<<"\n";
    cout<<"my date of birth is : 20/12/2000 "<<"\n";
    cout<<"my mobile number is : 7003030303 "<<"\n";
}
q) write a program to print you are eligible for voting or not based on your age.

#include<iostream>
using namespace std;
int main(){
    int age;

    cout<<"enter your age: ";
    cin>>age;

    if(age>=18){
        cout<<"you are eligible for voting";
    }else{
        cout<<"you are not eligible for voting";
    }
}

q) write a program to print the ASCII value of a character.

#include<iostream>
using namespace std;
int main(){
    char ch;

    cout<<"enter  the character: ";
    cin>>ch;
    cout<<"the ASCII value of "<<ch<<" is: "<<int(ch);
}

q)write a program to print the leargest value in two value.


#include<iostream>
using namespace std;
int main(){
    int a;
    int b;

    cout<<"enter the number of a: ";
    cin>>a;

    cout<<"enter the number of b: ";
    cin>>b;

    if(a>b){
        cout<<"a is a leargest valued "<<endl;
    }else{
        cout<<"b is a leargest valued "<<endl;
    }
}

q)calculate the triangle area ?

#include<iostream>
using namespace std;
int main(){
    int height;
    int breath;
    int area;


    cout<<"enter the number of height: ";
    cin>>height;

    cout<<"enter the number of breath: ";
    cin>>breath;

    area= 0.5*height*breath;

    cout<<"the triabgle area is: "<<area<<endl;

}

q) Write a program to find power of any number x ^ y.

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int x;
  int y;
  int c;

  cout<<"enter the number of x:";
  cin>>x;

  cout<<"enter the number of y: ";
  cin>>y;

  c=(pow (x ,y));

  cout<<" x power is : "<<c<<endl;
  return 0;
}

q)Write a Program that takes minutes as input and display the total number of hours and minutes.

#include<iostream>
using namespace std;
int main(){
 int menits;
 int total;
 int total1;
 cout<<"enter the menits: ";
 cin>>menits;

  total =menits/60;
  total1 = menits%60;
  cout<<"hours is : "<<total<<endl;
  cout << "menits is : " << total1 << endl;
}

q)Write a program to compute the perimeter and area of a circle with a given radius.

#include <iostream>
using namespace std;
int  main()
{
    int radius;
    float area, perimeter;
    radius = 6;
    perimeter = 2 * 3.14 * radius;
     cout<<("Perimeter of the Circle = %0.2f inches\n", perimeter);
    area = 3.14 * radius * radius;
    cout<<("Area of the Circle = %0.2f square inches\n", area);
}

q)Write a program to print your name, date of birth. and mobile number

#include <iostream>
using namespace std;
int main()
{
    cout << "ranajit bera wellcome to our new dsa jurney ";
    cout << "\n29 septembar 2005";
    cout << "\nPhone Number : +919609794466";
    return 0;
}

Q)2. Write a program to enter two numbers and perform all arithmetic operations.
*/

#include <iostream>
    using namespace std;
int main()
{
    int x, y, sum, sub, mul;
    float div;
    printf("Enter Two Numbers = ");
    scanf("%d %d", &x, &y);
    sum = x + y;
    sub = x - y;
    mul = x * y;
    div = x / y;

    cout << endl
         << "Summation of Two Numbers = " << sum << endl;
    cout << "Subtraction of Two Numbers = " << sub << endl;
    cout << "Multiplication of Two Numbers = " << mul << endl;
    cout << "Division of Two Numbers = " << div << endl;

    return 0;
}
