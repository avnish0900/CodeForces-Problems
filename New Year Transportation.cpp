#include "bits/stdc++.h"
using namespace std;
void solve(){
  long long n,k;cin>>n>>k;
  vector<long long >a(n);
  for(long long i=1;i<n;i++){
    cin>>a[i];
  }
  long long visited=0;
  for(long long i=1;true;i++){
    if(i==k){visited=1;break;}
    if(i>k){ break;}
    i=(a[i]+i-1);
    //cout<<i<<" ";
  }
  
  if(visited==0){ cout<<"NO\n";}
  else{ cout<<"YES\n";}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	long long t=1;
	//cin>>t;
	while(t--) {solve();}
}
