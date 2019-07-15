/*Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order).

The replacement must be in-place and use only constant extra memory.*/

class Solution {
public:
    void nextPermutation(vector<int>& num) {
        int n  =  num.size();
        int pivot = -1;
        for(int i = n-1; i > 0; i--){
            if(num[i] > num[i-1]){
                pivot = i-1;
                break;
            }
        }
        int j;
        if(pivot == -1){
            reverse(num.begin(), num.end());
        }
        else{
            
            for(int i = pivot+1; i < n; i++){
                if(num[pivot] < num[i]){
                    j = i;
                }
            }
            swap(num[pivot], num[j]);
            reverse(num.begin()+pivot+1, num.end());
        }
        
    }
};
