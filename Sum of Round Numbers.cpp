#include <bits/stdc++.h>
using namespace std;
int main() {
  long long t;cin>>t;
  while(t--){
    long long n;cin>>n;
    long long length=0;
    vector<long long >v;
    while(n!=0){
      long long digit=n%10;
      if(digit!=0){
        v.push_back(digit*pow(10,length));
      }
      n/=10;
      length+=1;
    }
    cout<<v.size()<<endl;
    for(auto i: v){
      cout<<i<<" ";
    }cout<<endl;
  }
}
