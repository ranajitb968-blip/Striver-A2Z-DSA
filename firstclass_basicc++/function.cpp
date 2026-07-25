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

*/
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