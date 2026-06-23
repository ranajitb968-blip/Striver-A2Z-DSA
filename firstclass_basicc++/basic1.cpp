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

squar problem solve div 4 1061 code force


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;

    while (x--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a == b && b == c && c == d&&d == a)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }
    return 0;
}


Q) khba is writing his girlfriend's name. He has n
 cubes, each with one lowercase Latin letter written on it. They are arranged in a row, forming a string s
. His girlfriend's name is also a string t
, consisting of n
 lowercase Latin letters.

To prove his love, he must check whether it is possible to rearrange the letters of string s
 so that it becomes her name t
.Input
The first line contains an integer q
 (1≤q≤1000
) — the number of test cases.

The first line of each test case contains an integer n
 (1≤n≤20
).

The second line of each test case contains two distinct strings s
 and t
, each consisting of n
 lowercase Latin letters.

Output
For each test case, output "YES" if the letters of s
 can be arranged to form t
; otherwise, output "NO".

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as positive responses.

Example
InputCopy
5
7
humitsa mitsuha
4
orhi hori
6
aakima makima
6
nezuqo nezuko
6
misaka mikasa
OutputCopy
YES
YES
NO
NO
YES
Note
In the first example, the initial string is "humitsa", and the following operations can be performed:

swap the first and third characters, resulting in "muhitsa"
swap the second and fourth characters, resulting in "mihutsa"
swap the third and fifth characters, resulting in "mithusa"
swap the fourth and sixth characters, resulting in "mitsuha"
In the second example, the initial string is "orhi", and the following operations can be performed:

swap the second and third characters, resulting in "ohri"
swap the first and second characters, resulting in "hori"


#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
        int n;
        cin>>n;

        string s , t;
        cin>>s>>t;
        sort(s.begin(), s.end());
        sort(t.begin(),t.end());
        if(s==t){
            cout<< "YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        }
return 0;
}


q)The little boy Nikita was given some cubes as a present. He decided to build a tower out of them.

Initially, the tower doesn't have any cubes. In one move, Nikita either puts exactly 1
 cube on top of the tower or removes exactly 1
 cube from the top of the tower. Is it possible that after n
 moves, the resulting tower has exactly m
 cubes?

Input
Each test contains multiple test cases. The first line of input contains a single integer t
 (1≤t≤100
) — the number of test cases. The description of the test cases follows.

The only line of each test case contains two integers n
 and m
 (1≤n,m≤100
).

Output
For each test case, output "Yes" (without quotes) if Nikita can obtain a tower with m
 cubes, and "No" (without quotes) otherwise.

You can output each letter in any case (lowercase or uppercase). For example, the strings "yEs", "yes", "Yes", and "YES" will be accepted as a positive answer.

Example
InputCopy
3
3 3
2 4
5 3
OutputCopy
Yes
No
Yes
Note
In the first test case, Nikita can put 1
 cube on top of the tower 3
 times in a row, so the answer is "Yes".

In the second test case, Nikita can only end up with either a tower with no blocks or a tower with 2
 blocks, so the answer is "No".
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        if (m > n)
        {
            cout << "No" << endl;
        }
        else if ((n - m) % 2 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}