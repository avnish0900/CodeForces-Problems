#include <bits/stdc++.h>
using namespace std;
int main(){
  long long s,n;cin>>s>>n;
  long long flag=0;
  vector<pair<long long,long long>>a(n);
  for(long long i=0;i<n;i++){
    cin>>a[i].first;
    cin>>a[i].second;
  }sort(a.begin(),a.end());
  for(long long i=0;i<n;i++){
    if(a[i].first<s){
      s+=a[i].second;
    }
    else{
      flag=1;
      break;
    }
  }
  if(flag==0){ cout<<"YES\n";}
  else{ cout<<"NO\n";}
}
