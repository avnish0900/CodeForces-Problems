#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long n,m;cin>>n>>m;
  long long  maxx = ((n-(m-1))*(n-(m-1)-1)/2);
    
    long long sz=n/m;
    long long rem=n%m;
    long long mini = rem*(sz+1)*(sz)/2 + (m-rem)*(sz)*(sz-1)/2;
    cout<<mini<<" "<<maxx<<"\n";
  
}

int  main() {
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  long long  t;//cin>>t;
  t=1;
  while(t--){
    solve();
  }
}
