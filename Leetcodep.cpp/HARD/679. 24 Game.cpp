/*class Solution {
public:

    bool solve(vector<double>& nums) {

        // Base case
        if (nums.size() == 1) {
            return abs(nums[0] - 24.0) < 1e-6;
        }

        // Pick any two numbers
        for (int i = 0; i < nums.size(); i++) {

            for (int j = i + 1; j < nums.size(); j++) {

                vector<double> remaining;

                // Put all numbers except i and j
                for (int k = 0; k < nums.size(); k++) {
                    if (k != i && k != j) {
                        remaining.push_back(nums[k]);
                    }
                }

                double a = nums[i];
                double b = nums[j];

                // All possible operations
                vector<double> results;

                results.push_back(a + b);
                results.push_back(a - b);
                results.push_back(b - a);
                results.push_back(a * b);

                // Division only when denominator != 0
                if (abs(b) > 1e-6)
                    results.push_back(a / b);

                if (abs(a) > 1e-6)
                    results.push_back(b / a);

                // Try every result
                for (double value : results) {

                    remaining.push_back(value);

                    if (solve(remaining))
                        return true;

                    remaining.pop_back();
                }
            }
        }

        return false;
    }

    bool judgePoint24(vector<int>& cards) {

        vector<double> nums;

        for (int x : cards) {
            nums.push_back(x);
        }

        return solve(nums);
    }
};*/