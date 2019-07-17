/*Given a string, find the length of the longest substring without repeating characters.

Example 1:

Input: "abcabcbb"
Output: 3 
Explanation: The answer is "abc", with the length of 3. */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int>mp;
        int b = 0;
        int mx = 0, cur_mx = 0;
        for(int i = 0; i < s.size(); i++){
            if(mp[s[i]] == 0 || mp[s[i]] < b){
                mp[s[i]] = i+1;
                cur_mx++;
            }
            else{
                b = mp[s[i]];
                cur_mx = abs(i-mp[s[i]] + 1); 
                mp[s[i]] = i+1;
            }
            mx = max(mx, cur_mx);
            //cout << cur_mx;
        }
        
        return mx;
        
    }
};
