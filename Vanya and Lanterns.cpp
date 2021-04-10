#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long n,l;cin>>n>>l;
  vector<long long >v(n);
  long long maxx=INT_MIN,mini=INT_MAX;
  for(auto &i:v){
    cin>>i;
  }
  sort(v.begin(),v.end());
  for(long long i=0;i<n-1;i++){
    long long dif=(v[i+1]-v[i]);
    maxx=max(maxx,dif);
  }
  double mid=maxx/2.0;
  double  first=v[0]-0.0;
  double  last=(double)l-v[n-1];
  double  ans=max(first,last);
  ans=max(ans,mid);
  printf("%.10f\n",ans);
}

int  main() {
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  long long  t;
  t=1;
  //cin>>t;
  while(t--){
    solve();
  }
}
