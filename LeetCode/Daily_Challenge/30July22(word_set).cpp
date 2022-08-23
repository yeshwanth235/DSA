#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		vector<string> wordSubsets(vector<string> words1, vector<string> words2) {
			int freq[26] = {0};
        
        	for(auto word:words2){
            	int temp[26] = {0};
            	for(auto c:word) temp[c-'a']++;
            	for(int i=0;i<26;i++){
                	freq[i] = max(freq[i],temp[i]);
            	}
        	}
        	vector<string> ans;
        
        	for(auto word:words1){
            	bool flag = true;
            	int temp[26] = {0};
            	for(auto c:word) temp[c-'a']++;
            	for(int i=0;i<26;i++){
                	if(freq[i]>temp[i]) flag = false;
            	}
           		if(flag) ans.push_back(word);
        	}
        	return ans;
		}
};

int main() {
	clock_t begin = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n, m;
	cin>>n>>m;
	string s;
	vector<string> word1, word2;
	for(int i=0; i<n; i++) {
		cin>>s;
		word1.push_back(s);
	}
	for(int i=0; i<m; i++) {
		cin>>s;
		word2.push_back(s);
	}

	Solution obj;
	vector<string> ans = obj.wordSubsets(word1, word2);
	for(auto x: ans) {
		cout<<x<<" ";
	}
	cout<<"\n";

	clock_t end = clock();

	cout<<"\n\nEstimated time: "<<double(end - begin)<<"\n";
}