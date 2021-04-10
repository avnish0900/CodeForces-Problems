#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long n;cin>>n;
  vector<long long >a(n);
  for(long long i=0;i<n;i++){
    cin>>a[i];
  }
  vector<long long >b=a;
  sort(b.begin(),b.end());
  long long first=0,last=0,flag=0;
  for(long long i=0;i<b.size();i++){
    if(b[i]!=a[i] && flag==0){
      first=i;
      flag=1;
    }
    if(b[i]!=a[i]){
      last=i;
    }
  }
  //cout<<first<<" "<<last<<endl;
  long long f=first,l=last;
  while(first<last ){
    swap(a[first++],a[last--]);
  }
  flag=0;
  for(long long i=0;i<n;i++){
    if(a[i]!=b[i]){
      flag=1;
    }
  }
  if(flag==0){
    cout<<"yes\n";
    cout<<f+1<<" "<<l+1<<"\n";
  }
  else{
    cout<<"no\n";
  }
}

int  main() {
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  long long  t;
  t=1;
  //cin>>t;
  while(t--){
    solve();
  }
}
