
/*Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.*/

class Solution {
public:
    int missingNumber(vector<int>& num) {
        int n =  num.size();
        int sum1 = 0;
        for(int i = 0; i < num.size(); i++){
            sum1 += num[i];
        }
        int sum2 = n*(n+1)/2;
        return sum2-sum1;
    }
};
