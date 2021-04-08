#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
  long long t;cin>>t;
  while(t--){
    long long n;cin>>n; 
    long long sum=0,xorr=0;
    vector<long long >a(n);
    for(auto &i:a){
      cin>>i;
      sum+=i;
      xorr^=i;
    }
    cout<<2<<"\n";
    cout<<sum+xorr<<" "<<xorr<<"\n";
  }
}
