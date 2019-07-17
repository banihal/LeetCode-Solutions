/*
Given a set of candidate numbers (candidates) (without duplicates) and a target number (target), find all unique combinations in candidates where the candidate numbers sums to target.

The same repeated number may be chosen from candidates unlimited number of times.

Note:

All numbers (including target) will be positive integers.
The solution set must not contain duplicate combinations.
Example 1:

Input: candidates = [2,3,6,7], target = 7,
A solution set is:
[
  [7],
  [2,2,3]
]
Example 2:

Input: candidates = [2,3,5], target = 8,
A solution set is:
[
  [2,2,2,2],
  [2,3,3],
  [3,5]
]
*/

class Solution {
private:
    void findCombinaionSum(vector<int>& candidates, vector<vector<int> >& result, vector<int>& combination, int startIndex, int target){
        int n = candidates.size();
        
        if(target == 0){
            result.push_back(combination);
            return;
        }
        
        for(int i = startIndex; i < n; i++){
            if(candidates[i] > target) break;
            combination.push_back(candidates[i]);
            findCombinaionSum(candidates, result, combination, i, target-candidates[i]);
            combination.pop_back();
        }
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int> > result;
       vector<int>combination;
       sort(candidates.begin(), candidates.end());
       findCombinaionSum(candidates, result, combination, 0, target);
       return result;
    }
};
