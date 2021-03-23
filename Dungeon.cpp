#include <bits/stdc++.h>
using namespace std;
int main() {
  long long t;cin>>t;
  while(t--){
    long long a,b,c;cin>>a>>b>>c;
    long long sum=a+b+c;
    if(sum%9){ cout<<"NO\n";}
    else{
      if(min(a,min(b,c)) >= (sum)/9) { cout<<"YES\n";}else{ cout <<"NO\n";}}
    
  }
}
