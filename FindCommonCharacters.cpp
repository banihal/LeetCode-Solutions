/*Given an array A of strings made only from lowercase letters, return a list of all characters that show up in all strings within the list (including duplicates).  For example, if a character occurs 3 times in all strings but not 4 times, you need to include that character three times in the final answer.

You may return the answer in any order.*/

class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<int>v1(26,0);
        vector<string>vec;
        for(int j = 0; j < A[0].size(); j++){
                v1[int(A[0][j])-97]++;
        }
        for(int i = 1; i < A.size(); i++){
            vector<int>v2(26,0);
            for(int j = 0; j < A[i].size(); j++){
                v2[int(A[i][j])-97]++;
            }
        
            for(int j = 0; j < 26; j++){
                v1[j] = min(v1[j], v2[j]);
            }
            
            
        }
        for(int j = 0; j < 26; j++){
            //cout  << v1[j] << " ";
            if(v1[j] != 0){
               string s = "";
               s += char(j+97);
               int c = v1[j];
               while(c--)
                vec.push_back(s);
            }
        }
        
        return vec;
    }
};
