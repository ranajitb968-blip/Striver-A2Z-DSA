/*
#include<iostream>
#include<vector>
using namespace std;

vector<int>pairSum(vector<int>nums, int target){
    vector<int>ans;
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}
int main(){
    vector<int>nums = {2,7,11,15};
    int target = 17;
    
    vector<int>ans = pairSum(nums,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}


// time complexity is O(n^2) and space complexity is O(1)



** next optimized code is below using two pointer
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    int left = 0; int right = n - 1;

    while(left< right ){
        int pairSum = nums[left] + nums[right];
        if(pairSum > target){
            right--;
        }
        else if(pairSum < target){
            left++;
        }
        else{
            ans.push_back(left);
            ans.push_back(right);
            return ans;
        }
    }
  return ans;

}
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 17;

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}