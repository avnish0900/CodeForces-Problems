#include<bits/stdc++.h>
using namespace std;
#define ll long long
set<ll> factorize(ll n){
    set<ll> res;
    int64_t z = 2;
 
    while (z*z <= n){
        if (n % z == 0)
            {
        res.insert(z);
            n /= z;
        }
    else
        z++;
    }
    if (n > 1)
        res.insert(n);
    res.insert(1);
    return  res;
}
int main(){
  long long t;cin>>t;
  while(t--){
    ll p ,q;cin>>p>>q;
    auto f = factorize(q);
    ll ans = 0;
    ll temp = p;
    for(auto x : f){
      while(p%x==0 ){
       p/=x;
       if(p%q!=0){
         ans = max(ans,p);
        }
        if(x==1)break;
      }
      p = temp;
    }
    cout<<ans<<endl;
  }
  return 0;
}
