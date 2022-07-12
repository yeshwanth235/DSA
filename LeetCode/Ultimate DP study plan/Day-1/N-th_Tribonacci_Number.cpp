//1137 N-th tribonacci Number

#include<bits/stdc++.h>
using namespace std;


class Solution {
	public:
		int tribonacci(vector<int> &dp, int n) {
			if(n==0) return 0;
			if(dp[n] != 0) return dp[n];
			dp[n] = tribonacci(dp, n-1)+tribonacci(dp, n-2)+tribonacci(dp, n-3);  
			return dp[n];
		}
};

int main() {
	int n;
	cin>>n;
	vector<int> dp(n, 0);
	dp[1] = 1;
	dp[2] = 1;
	Solution obj;
	cout<<obj.tribonacci(dp, n)<<endl;
	return 0;
}
