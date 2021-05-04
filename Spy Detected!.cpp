#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(xs) xs.begin(), xs.end()
#define mem(a, b) memset(a, (b), sizeof(a))
#define sz(x)             (llo)((x).size())
#define pb push_back
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18



int main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ll t;cin>>t;
  while(t--){
    ll n;cin>>n;
    ll a[n];

    ll p=0;
    ll q=0;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
      cin>>a[i];
      if(mp[a[i]]==0){
        mp[a[i]]=1;
      }
      else{
        mp[a[i]]++;}
    }
    for(ll i=0;i<n;i++){
      if(mp[a[i]]==1){
        cout<<i+1<<"\n";
        break;
      }
    }
  }
}

