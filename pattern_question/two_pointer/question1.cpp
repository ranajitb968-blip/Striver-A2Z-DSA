/*LeetCode 125 — Valid Palindrome

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward.

Alphanumeric characters include letters (a-z, A-Z) and numbers (0-9).

Given a string s, return true if it is a palindrome, or false otherwise.

Example 1

Input:

s = "A man, a plan, a canal: Panama"

Output:

true

Explanation:

"amanaplanacanalpanama"

is a palindrome.

Example 2

Input:

s = "race a car"

Output:

false

Explanation:

"raceacar"

is not a palindrome.

Example 3

Input:

s = " "

Output:

true

Explanation:
An empty string after removing non-alphanumeric characters is considered a palindrome.

Constraints
1 <= s.length <= 2 * 10^5
s consists only of printable ASCII characters.
Your task

Solve it using the Two Pointer technique.


**this is simple solution using two pointer technique.

#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(string s){


    int left = 0;
    int right = s.length() -1;

    while(left<right ){
        if(s[left] != s[right]){
            return false;
        }else{
            left++;
            right--;
        }
    }
    return true;
}

*/


#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(string s){

    int left = 0; 
    int right = s.length() -1;
    while(left<right){
        while(left<right && !isalnum(s[left])){
            left++;
        }
        while(left<right && !isalnum(s[right])){
            right--;
        }
        if(tolower(s[left]) != tolower(s[right])){
            return false;
        }else{
            left++;
            right--;
        }
    }
    return true;
}