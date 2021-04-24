#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long n;cin>>n;
  vector<long long >a(n);
  long long maxx=0;
  for(long long i=0;i<n;i++){
    cin>>a[i];
    maxx=max(maxx,a[i]);
  }long long sum=0;
  for(auto & i:a){ sum+=maxx-i;}
  cout<<sum<<endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	long long t=1;
	//cin>>t;
	while(t--) {solve();}
}
