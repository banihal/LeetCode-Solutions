



class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int>mp;
        
        vector<pair<int, int>>p;
        for(int i = 0; i  < nums.size(); i++){
            mp[nums[i]]++;
        }
        int c = 0;
        map<int, int> :: iterator it;
        for(it = mp.begin(); it != mp.end(); it++){
             p.push_back(make_pair(it->second, it->first));
             //cout << it->first << " " << it->second << endl;
        }
        sort(p.rbegin(), p.rend());
        vector<int>vec;
        for(int i = 0; i < k ;i++){
            
            vec.push_back(p[i].second);
        }
        return vec;
    }
};
