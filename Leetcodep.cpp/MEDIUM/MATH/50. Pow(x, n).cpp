/*Implement pow(x, n), which calculates x raised to the power n (i.e., xn).



Example 1:

Input: x = 2.00000, n = 10
Output: 1024.00000
Example 2:

Input: x = 2.10000, n = 3
Output: 9.26100
Example 3:

Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25


Constraints:

-100.0 < x < 100.0
-231 <= n <= 231-1
n is an integer.
Either x is not zero or n > 0.
-104 <= xn <= 104



code here on



class Solution {
public:
    double myPow(double x, int n) {

      //this is cornor case
        if (n == 0)
            return 1.0;
        if (x == 0)
            return 0.0;
        if (x == 1)
            return 1.0;
        if (x == -1 && n % 2 == 0)
            return 1.0;
        if (x == -1 && n % 2 != 0)
            return -1.0;

        long BinaryFrom = n;
        // check for n or binaryfrom less then 0 .
        if (BinaryFrom < 0) {
            x = 1 / x;
            BinaryFrom = -BinaryFrom;
        }

        double ans = 1;

        while (BinaryFrom > 0) {
            if (BinaryFrom % 2 == 1) {
                ans *= x;
            }
            x *= x;          // this is x^2;
            BinaryFrom /= 2; // this is update
        }
        return ans;
    }
};
*/