/*Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note:

The solution set must not contain duplicate triplets.

Example:

Given array nums = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]

*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int> >ans;
        vector<int>res(3);
        sort(nums.begin(), nums.end());
        int left, right = nums.size()-1;
        for(int i = 0; i < nums.size(); i++){
            left = i+1;
            right = nums.size()-1;
            while(left < right){
                if(nums[i] + nums[left] + nums[right] == 0){
                    res[0] = nums[i];
                    res[1] = nums[left];
                    res[2] = nums[right];
                    ans.insert(res);
                    left++;
                    right--;
                }
                else if(nums[i] + nums[left] + nums[right] < 0)
                    left++;
                else
                    right--;
                
            }
        }
        vector<vector<int> >ret(ans.begin(), ans.end());
        return ret;
    }
};
