#include <bits/stdc++.h>
using namespace std;
int main() {
  long long t;
  cin>>t;
  while(t--){
    long long n;cin>>n;
    
    for(long long i=n;i>=1;--i){
      cout<<4*n-2*i<<" ";
    }
    cout<<endl;
  }
}
