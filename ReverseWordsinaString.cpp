/*Given an input string, reverse the string word by word.

 

Example 1:

Input: "the sky is blue"
Output: "blue is sky the"*/


class Solution {
public:
    string reverseWords(string s) {
        
        
        vector<string>vec;
        istringstream iss(s);
        for(string s; iss >> s;){
            vec.push_back(s);
        }
        string str;
        if(vec.size() == 0)
            return str;
        reverse(vec.begin(), vec.end());
        for(auto ss : vec){
            str += ss + " ";
        }
        str.erase(str.size()-1);
        return str;
        
    }
};
