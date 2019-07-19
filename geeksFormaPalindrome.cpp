/*Given a string, find the minimum number of characters to be inserted to convert it to palindrome.
For Example:
ab: Number of insertions required is 1. bab or aba
aa: Number of insertions required is 0. aa
abcd: Number of insertions required is 3. dcbabcd
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    string str;
	    cin >> str;
	    int n = str.size();
	    int dp[n][n];
	    memset(dp, 0, sizeof(dp));
	    int l , r;
	    for(int i = 1; i < n; ++i){
	        for(l = 0, r = i; r < n; ++l, ++r){
	            dp[l][r] = (str[l] == str[r]) ? dp[l+1][r-1] : min(dp[l][r-1], dp[l+1][r])+1;
	        }
	    }
	    cout <<  dp[0][n-1] << "\n";
	}
	return 0;
}
