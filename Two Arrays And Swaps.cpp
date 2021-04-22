#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long n,m;cin>>n>>m;
  vector<long long>a(n);
  vector<long long >b(n);
  for(auto &i:a){cin>>i;}
  for(auto &i:b){cin>>i;}
  long long sum=0;
  sort(a.begin(),a.end());sort(b.begin(),b.end());reverse(b.begin(),b.end());
  for(long long i=0;i<n;i++){
    if(a[i]<b[i] and m!=0){sum+=b[i];m--;}
    else{ sum+=a[i];}
  }
  cout<<sum<<endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	long long t=1;
	cin>>t;
	while(t--) {solve();}
}
