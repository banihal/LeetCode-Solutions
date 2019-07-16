/*Given an array nums of n integers where n > 1,  return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& num) {
        int n = num.size();
        vector<long>v1(n,0);
        vector<long>v2(n,0);
        v1[0] = num[0];
        v2[n-1] = num[n-1];
        for(int i = 1; i < n; i++){
            v1[i] = v1[i-1]*num[i];
        }
        for(int i = n-2; i >= 1; i--){
            v2[i] = num[i]*v2[i+1];
            
        }
    
        num[0] = v2[1];
        num[n-1] = v1[n-2];
        for(int i = 1; i < n-1; i++){
            num[i] = v1[i-1]*v2[i+1];
        }
        return num;
    }
};
