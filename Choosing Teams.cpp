#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long n,m;cin>>n>>m;
  vector<long long>a(n);
  long long sum=0;
  for(auto &i:a){cin>>i;if(5-i>=m){sum++;}}
  sum=sum/3;
  cout<<sum<<endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	long long t=1;
	//cin>>t;
	while(t--) {solve();}
}
