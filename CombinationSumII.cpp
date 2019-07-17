/*Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sums to target.

Each number in candidates may only be used once in the combination.

Note:

All numbers (including target) will be positive integers.
The solution set must not contain duplicate combinations.
Example 1:

Input: candidates = [10,1,2,7,6,1,5], target = 8,
A solution set is:
[
  [1, 7],
  [1, 2, 5],
  [2, 6],
  [1, 1, 6]
]
Example 2:

Input: candidates = [2,5,2,1,2], target = 5,
A solution set is:
[
  [1,2,2],
  [5]
]*/

class Solution {
private:
    void findCombinaionSum(vector<int>& candidates, set<vector<int> >& result, vector<int>& combination, int startIndex, int target){
        int n = candidates.size();
        
        if(target == 0){
            result.insert(combination);
            return;
        }
        
        for(int i = startIndex; i < n; i++){
            if(candidates[i] > target) break;
            combination.push_back(candidates[i]);
            findCombinaionSum(candidates, result, combination, i+1, target-candidates[i]);
            combination.pop_back();
        }
    }
    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       set<vector<int> > result;
       vector<int>combination;
       sort(candidates.begin(), candidates.end());
       findCombinaionSum(candidates, result, combination, 0, target);
       vector<vector<int> > ans(result.begin(), result.end());
       return ans;
    }
};
