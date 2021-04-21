#include "bits/stdc++.h"
using namespace std;
void solve(){
  long long n,s,t;cin>>n>>s>>t;
  vector<pair<long long,long long> >a(n+5);
  for(long long i=1;i<=n;i++){
    cin>>a[i].first;
    a[i].second=0;
  }
      /*4 2 1   
        2 3 4 1*/            //ball is here (in starting)
  
  long long answer=0;
  while(s!=t and a[s].second!=1){
    long long current=a[s].first;
    a[s].second=1;
    s=current;
    answer++;
  }
  cout<<(s==t ? answer:-1)<<"\n";
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	long long t=1;
	//cin>>t;
	while(t--) {solve();}
}
