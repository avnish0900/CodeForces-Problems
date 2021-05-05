#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(xs) xs.begin(), xs.end()
#define mem(a, b) memset(a, (b), sizeof(a))
#define sz(x)             (llo)((x).size())
#define pb push_back

void solve(){


}

signed main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ll t;cin>>t;
  while(t--){
    ll n;cin>>n;
    ll a[n];
    ll all=0,partial=0,count=0;
    for(ll i=0;i<n;i++){
      cin>>a[i];
      all^=a[i];
    }
    for(ll i=0;i<n;i++){
      partial^=a[i];
      if(all ==partial){
        partial=0;
        count+=1;
      }
    }
    if(all==0){
      count=n;
    }
    if(count>=2){
      cout<<"YES\n";
    }
    else{
      cout<<"NO\n";
    }
  }
}
