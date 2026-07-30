/*
***theory of string in c++***

Different Methods to Reverse a String in C++.

Reversing the string means the last character will be the first character, second last character will be second character and so on. In C++, we can reverse a string in various different ways as show below:

Table of Content

*Using reverse() Function
*Using Reverse Iterators
*Using a Stack
*Using Two Pointer Technique
*Using Recursion


Using reverse() Function
C++ STL provides a built-in function reverse(), which can be used to reverse the string efficiently.

Example




#include <bits/stdc++.h>
using namespace std;
​
int main() {
    string s = "Hello World";
​
    // Using reverse() function to reverse s
    reverse(s.begin(), s.end());
​
    cout << s;
    return 0;
}

Output
dlroW olleH
Time Complexity: O(n), where n is the length of string.
Auxiliary Space: O(1)



*Using Reverse Iterators
In C++, reverse iterators such as string.rbegin() and string.rend() are used to allow the traversal of string in reverse. We can use them to construct temporary reversed version of the string and then assign it to the original string.

Example




#include <bits/stdc++.h>
using namespace std;
​
int main() {
    string s = "Hello World";
​
    // Creating a temporary reversed string
    // and assigning it to the s
    s = string(s.rbegin(), s.rend());

    cout << s;
    return 0;
}

Output
dlroW olleH
Time Complexity: O(n), where n is the length of string.
Auxiliary Space: O(n), for temporary reversed string.

**Using a Stack
A stack can also be used to reverse a string due to its LIFO (Last In First Out) property. We can push all characters of the string into a stack and clear the current string. Then we pop characters from the stack and append them to the string one by one, resulting in the reversed string.

Example




#include <bits/stdc++.h>
using namespace std;
​
int main() {
    string s = "Hello World";
    stack<char> st;
​
    // Push each character of string into stack
    for (char c : s)
        st.push(c);
​
    // Clear the string
    s.clear();
​
    // Pop characters from stack and add them to
    // reversed string
    while (!st.empty()) {
        s.push_back(st.top());
        st.pop();
    }
​
    cout << s;
    return 0;
}

Output
dlroW olleH
Time Complexity: O(n), where n is the length of string.
Auxiliary Space: O(n), for stack.

**Using Two Pointer Technique
In two-pointer technique, we use two pointers: one starting at the beginning (left) and one at the end (right) of the string. We move them towards the centre of the string and keep swapping the characters they point till they meet each other.

Example




#include <bits/stdc++.h>
using namespace std;
​
int main() {
    string s = "Hello World";
​
    // Initialize two pointers: left at start
    //  and right at the end of the string
    int l = 0;
    int r = s.length() - 1;
​
    // Loop until the two pointers meet in the middle
    while (l < r) {

        // Swap characters at position left and right
        swap(s[l], s[r]);
​
        // Move the left pointer to right
        l++;
​
        // Move the right pointer to left
        r--;
    }
​
    cout << s;
    return 0;
}

Output
dlroW olleH
Time Complexity: O(n), where n is the length of string.
Auxiliary Space: O(1)

Note: Two pointer technique is implemented in the std::reverse() function.

**Using Recursion
The two-pointer technique can also be implemented using recursion though it can be less space efficient and harder to understand.

Example




#include <bits/stdc++.h>
using namespace std;
​
// Function to reverse the string using recursion
void revStr(string &s, int l, int r) {

    // Base case: When left and right pointer meet
    if (l >= r)
        return;
​
    // Swap characters at left and right
    swap(s[l], s[r]);
​
    // Recursive call to reverse remaining substring
    revStr(s, l + 1, r - 1);
}
​
int main() {
    string s = "Hello World";
​
    // Call the recursive function to reverse string
    revStr(s, 0, s.length() - 1);
​
    cout << s;
    return 0;
}



**hands write code practice 


   #include<bits/stdc++.h>
   using namespace std;
   int main(){
    string m="ranajit";
    cout<<m.length()<<endl;
   }




#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[] = "ranajit bera";
    int len=0;

    for (int i = 0; i < str[i] != '\0'; i++)
    {
        len++;
    }
    cout<<str<<endl;
    cout<<strlen(str)<<endl;
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
int main()
{
   string str ="ranajit bera";
   str.push_back('!');
   cout << str << endl;
   str.pop_back();
   cout << str << endl;
   str.insert(12, " is a good boy");
   cout<<str<<endl;
   str.erase(4 , 8);
    cout<<str<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    string name= {"ranajit bera"};

    name =string (name.rbegin(),name.rend());
    cout<<name;

    return 0;
}

// inputs - banana
// output - bnn
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);

    for(int i=0;i<s.length();i++){
        if(s[i]=='a'){
            // string.erase(start_position, number_of_characters);
            s.erase(i, 1);
            i--; // Adjust index after removal
        }
        cout<<s[i];
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
string result;

for (char c : s)
{
    if (c != 'a')
    {
        result.push_back(c);
    }
}

cout << result;
}



//. Count Vowels ⭐
Input
competitive
 Output
 5

 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int count=0;
    getline(cin,s);
    for(char c: s){
        if(c=='i'||c=='e'||c=='o'||c=='u'||c=='a'){
            count++;
        }
    }
    cout<<count;
}
