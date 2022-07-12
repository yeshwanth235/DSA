//509 Fibonacci Number

#include<bits/stdc++.h> 

using namespace std;


class Solution {
	public:
		
		int fib(vector<int> &dp, int n) {
			if(n==0)
				return 0;
			if(dp[n] != 0)
				return dp[n];
			dp[n] = fib(dp, n-1) + fib(dp, n-2);
			return dp[n];
		}
};

int main() {
	int n;
	Solution obj;
	vector<int> dp(n, 0);
	dp[1]=1;
	cin>>n;
	cout<<obj.fib(dp, n)<<endl;
	
}

