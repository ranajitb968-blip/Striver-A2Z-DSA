/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.



Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]


Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1







ans here



class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0; //intialize left variable

        int n = nums.size();  //declear n variable for n size

          //for loop iteration
        for(int right = 0; right < n; right ++){
            if(nums[right]!= 0){               //this if condition for check zero is not right element
                swap(nums[left],nums[right]);        //then swap between left and right
                left ++;                         //then left ++ increase
            }
        }
    }
};


*/
