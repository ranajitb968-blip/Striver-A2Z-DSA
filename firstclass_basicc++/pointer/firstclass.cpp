
// 233.	Write a program to add two numbers using pointers.
#include <iostream>
using namespace std;

int main()
{
    int num1 = 10, num2 = 20;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    int sum = *ptr1 + *ptr2;

    cout << "Sum of " << *ptr1 << " and " << *ptr2 << " is: " << sum << endl;

    return 0;
}