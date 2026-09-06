/* Reverse a Given String

Write a C++ program to reverse a given string.
Example:
Sample Input: w3resource
Sample Output: ecruoser3w


#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    
    cout<<"enter your string name: ";
    getline(cin,str);
    reverse(str.begin(),str.end());
    cout<<"your reverse string are : "<<str<<endl;



    return 0;
}

*/
// 185.	Write a program to find the length of a string.

#include<bits/stdc++.h>
using namespace std;

int main(){

   char str[100];

    cout<<"enter your string name : ";
    cin.getline( str , 100);

   int length = (strlen(str));

   cout<<"your string length are "<<length<<endl;

}