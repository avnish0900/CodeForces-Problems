#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long n;cin>>n;
  vector<long long>a(n);
  long long police=0,untreated=0;
  for(auto &i :a){
    cin>>i;
    if(i==-1){
      if(police<=0){
        untreated+=1;
      }
      else{
        police--;
      }
    }
    else{
      police+=i;
    }
  }
  cout<<untreated<<"\n";
}

int  main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  long long  t;t=1;//cin>>t;
  while(t--){solve();}
}
