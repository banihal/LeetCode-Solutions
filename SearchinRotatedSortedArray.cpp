/*Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

You are given a target value to search. If found in the array return its index, otherwise return -1.*/

class Solution {
public:
    int getNumber(vector<int>& num, int l, int r, int target){
        int mid = (l+r)/2;
        
        if(l > r) return -1;
        
        if(num[mid] == target) return mid;
        //if left part is solved
        if(num[l] <= num[mid]){
            if(target >= num[l] and target <= num[mid])
                return getNumber(num, l, mid-1, target);
            return getNumber(num, mid+1, r, target);
        }
        // else right would be solved
        if(target >= num[mid] and target <= num[r])
            return getNumber(num, mid+1, r, target);
        return getNumber(num, l, mid-1, target);
    }
    
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        int ans = -1;
        ans = getNumber(nums, l, r, target);
        return ans;
        
    }
};
