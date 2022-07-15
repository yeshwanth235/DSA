#include<bits/stdc++.h>

using namespace std;

class Solution {
	public:
		int calc(vector<int> &cost, vector<int> &dp, int i){
			if(i>=cost.size()) return 0;
			if(dp[i]!=-1) return dp[i];
			int left = calc(cost, dp, i+1);
			int right = calc(cost, dp, i+2);
			return dp[i] = min(left, right) + cost[i];
		}
		
		int minCostClimbingStairs(vector<int> &cost) {
			int n=cost.size();
			vector<int> dp(n+1, -1);
			return min(calc(cost, dp, 0), calc(cost, dp, 1));
		}
};

int main() {
	int n, c;
	cin>>n;
	vector<int> cost;
	Solution obj;
	for(int i=0; i<n; i++) {
		cin>>c;
		cost.push_back(c);
	}
	cout<<obj.minCostClimbingStairs(cost)<<endl;
}
