#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(xs) xs.begin(), xs.end()
#define mem(a, b) memset(a, (b), sizeof(a))
#define sz(x)             (llo)((x).size())
#define pb push_back


int main(){
  // #ifndef ONLINE_JUDGE
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  // #endif
  ll t;cin>>t;
  ll mod=1e9+7;
  while(t--){
    
    ll n,k;cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++){
      cin>>a[i];
    }
    ll i=0,j=n-1;
    while(k--){
      if(i>=j){
        break;
      }
      if(a[i]==0){
        //i++;
        for(ll q=i;q<=n-2;q++){
         // cout<<"aaa\n";
          if(a[q]>=1){
           // cout<<"q\n";
            a[q]-=1;
            a[j]+=1;
            i=q;
            break;
          }
        }
      }
      else{
        a[i]-=1;
        a[j]+=1;
      }
      
    }
    for(ll i=0;i<n;i++){
      cout<<a[i]<<" ";
    }cout<<"\n";
      
  }
}

