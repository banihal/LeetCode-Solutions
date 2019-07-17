/*Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:

The number of elements initialized in nums1 and nums2 are m and n respectively.
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2.
Example:

Input:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

Output: [1,2,2,3,5,6]*/

class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) { 
        
        if(num1.size() == 0 || num2.size() == 0)
            return;
        
        for(int i = 0; i < m; i++){
            if(num1[i] > num2[0]){
                //cout << "yes "; 
                swap(num1[i], num2[0]);
                sort(num2.begin(), num2.end());
            }
            else{
                
            }
        }
        //num1.insert(num1.begin()+m, num2.begin(), num2.end());
        int j = 0;
        for(int i = m; i < m+n; i++){
            num1[i] = num2[j++];
        }
    }
};
