#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long n;cin>>n;
  if(n%4!=0){
    cout<<"NO\n";
  }
  else{
    long long sum=0;
    cout<<"YES\n";
    for(long long i=1;i<=n;i++){
      if(i&1){
        continue;
      }
      else{
        sum+=i;
        cout<<i<<" ";
      }
    }
    long long diff=0;
    for(long long i=1;i<=n;i++){
      if(i==n-1){
        cout<<sum-diff;
        break;
      }
      if(i&1){
      diff+=i;
        cout<<i<<" ";
      }
    }
    cout<<endl;
  }

}

int  main() {
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  long long  t;
  t=1;
  cin>>t;
  while(t--){
    solve();
  }
}
