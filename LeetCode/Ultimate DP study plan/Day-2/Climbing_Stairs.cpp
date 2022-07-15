#include<bits/stdc++.h>

using namespace std;

class Solution {
	public:
		int climbStairs(int n) {
			if(n==1) return 1;
			int init = 1, prev=1, ans=0;
			for(int i=2; i <=n; i++) {
				ans = init + prev;
				prev=init;
				init=ans;
			}
			return ans;
		}
};

int main() {
	int n;
	cin>>n;
	Solution obj;
	cout<<obj.climbStairs(n)<<endl;
}
