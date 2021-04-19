#include <bits/stdc++.h>
using namespace std;
set<long long >s;



int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); 
  long long t;cin>>t;
  while(t--){
    s.clear();
    long long n;cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++){
      cin>>a[i];
      if(s.find(a[i]) != s.end()){
        s.insert(a[i]+1);
      }
      else{
        s.insert(a[i]);
      }
    }
    cout<<s.size()<<"\n";
  }
}
