/*Given an integer n, return a string array answer (1-indexed) where:

answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true.


Example 1:

Input: n = 3
Output: ["1","2","Fizz"]
Example 2:

Input: n = 5
Output: ["1","2","Fizz","4","Buzz"]
Example 3:

Input: n = 15
Output: ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]


Constraints:

1 <= n <= 104





code here

leetcode code here
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> FizzBuzz;
        int i = 1;
        while (i <= n) {
            if (i % 3 == 0 && i % 5 == 0) {
                FizzBuzz.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                FizzBuzz.push_back("Fizz");
            } else if (i % 5 == 0) {
                FizzBuzz.push_back("Buzz");
            } else {
                FizzBuzz.push_back(to_string(i));
            }
            i++;
        }
        return FizzBuzz;
    }
};





normal code here

#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int i=1;
    while ( i<=n)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout<< "FizzBuzz";
        }
        else if (i % 3 == 0)
        {
            cout<< "Fizz";
        }
        else if (i % 5 == 0)
        {
           cout<< "Buzz";
        }
        else if(i==i){
            cout<< i;
        }
        else{
            cout<<"not valid number";
        }
        i++;
    }

    return 0;
}

*/