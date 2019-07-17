/*Given a set of distinct integers, nums, return all possible subsets (the power set).

Note: The solution set must not contain duplicate subsets.

Example:

Input: nums = [1,2,3]
Output:
[
  [3],
  [1],
  [2],
  [1,2,3],
  [1,3],
  [2,3],
  [1,2],
  []
]*/

class Solution {

private:
    void findSubsets(vector<int>& num, vector<vector<int> >& result, vector<int>&subset, int index){
        if(index == num.size()){
            result.push_back(subset);
            return;
        }
        findSubsets(num, result, subset, index+1);
        
        subset.push_back(num[index]);
        findSubsets(num, result, subset, index+1);
        subset.pop_back();
        
    } 
    
public:
    vector<vector<int>> subsets(vector<int>& num) {
        vector<vector<int> >result;
        vector<int>subset;
        findSubsets(num, result, subset, 0);
        return result;
    }
};
