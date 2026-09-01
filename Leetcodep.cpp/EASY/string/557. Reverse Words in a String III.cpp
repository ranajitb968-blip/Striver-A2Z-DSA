/*Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.



Example 1:

Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Example 2:

Input: s = "Mr Ding"
Output: "rM gniD"


Constraints:

1 <= s.length <= 5 * 104
s contains printable ASCII characters.
s does not contain any leading or trailing spaces.
There is at least one word in s.
All the words in s are separated by a single space.





code here



class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        int n = s.size();
        // int end;

        for (int i = 0; i <= n - 1; i++) {
            if (s[i] == ' ') {
                int left = start;
                int right = i - 1;

                while (left < right) {
                    swap(s[left], s[right]);
                    left++;
                    right--;
                }
                start = i + 1;
            }
        }
       int  left = start;
        int  right = n - 1;
          while (left < right) {
            swap(s[left], s[right]);
             left++ ;
             right--;

          }
        return s;
    }
};    


*/