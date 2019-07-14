class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        
        vector<int>res(2);
        vector<pair<int, int> >vec(nums.size());
        for(int i = 0; i < nums.size(); i++){
            vec[i] = make_pair(nums[i], i);
        }
        int i = 0, j = nums.size()-1;
        sort(vec.begin(), vec.end());
        while(i <= j){
            if(vec[i].first + vec[j].first == target){
                res[0] = vec[i].second;
                res[1] = vec[j].second;
                break;
            }
            else if(vec[i].first + vec[j].first < target)
                i++;
            else
                j--;
        }
        return res;
    }
};
