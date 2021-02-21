#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>v;
int dp[200][405];
int solve(int idx,int t){
	if(idx==n){
		return 0;
	}
	if(dp[idx][t]!=-1) return dp[idx][t];
	int mn=INT_MAX;
	for(int i=t;i<=max(t,v[idx]);i++){
		mn=min(mn,abs(v[idx]-i)+solve(idx+1,i+1));
	}
	return dp[idx][t]=mn;
}

int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		memset(dp,-1,sizeof dp);
		cin>>n;
		v.resize(n);
		for(int i=0;i<n;i++)
		cin>>v[i];
		sort(v.begin(),v.end());
		int ans=solve(0,1);
		cout<<ans<<endl;
	}
	
}
