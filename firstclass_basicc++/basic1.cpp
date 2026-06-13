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
*/
#include<iostream>
using namespace std;

int main(){
    cout<<"my name is : ranajit bera "<<"\n";
    cout<<"my date of birth is : 20/12/2000 "<<"\n";
    cout<<"my mobile number is : 7003030303 "<<"\n";
}



