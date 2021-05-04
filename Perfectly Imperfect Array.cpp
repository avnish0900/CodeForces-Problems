#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(xs) xs.begin(), xs.end()
#define mem(a, b) memset(a, (b), sizeof(a))
#define sz(x)             (llo)((x).size())
#define pb push_back

bool isPerfectSquare(ll x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        ll sr = sqrt(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}


int main(){
  // #ifndef ONLINE_JUDGE
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  // #endif
  ll t;cin>>t;
  while(t--){
    ll n;cin>>n;
    ll a[n];
    ll pro=1;
    for(ll i=0;i<n;i++){
      cin>>a[i];
      pro*=a[i];
    }
    bool ans=true;
    ll count=0;
    for(ll i=0;i<n;i++){
      bool x=isPerfectSquare(a[i]);
      if(x==true){
        count++;
      }
    }
    cout<< (count==n ? "NO\n":"YES\n");
  }
}

