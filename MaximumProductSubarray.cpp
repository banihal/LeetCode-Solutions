/*Given an integer array nums, find the contiguous subarray within an array (containing at least one number) which has the largest product.*/

class Solution {
public:
    int maxProduct(vector<int>& num) {
        int ans = num[0];
        int mx = num[0], mn = num[0];
        int maxPrev = num[0], minPrev = num[0];
        for(int i = 1; i < num.size(); i++){
            mx = max(maxPrev*num[i], max(minPrev*num[i], num[i]));
            mn = min(maxPrev*num[i], min(minPrev*num[i], num[i]));
                
            ans = max(ans, mx);
            
            maxPrev = mx;
            minPrev = mn;
            
        }
        return ans;
    }
};
