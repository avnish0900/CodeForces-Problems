#include<bits/stdc++.h>
using namespace std;
int main(){
  long long  n;cin>>n;
  long long  m,arr[n];
  for(int i=1;i<=n;i++){
    cin>>m;
    arr[m]=i;
  }
  long long a,b;
  long long vasya=0,pretya=0;
  cin>>a;
  while(a--){
    cin>>b;
    vasya+=arr[b];
    pretya+=(n+1-arr[b]);
  }
  cout<<vasya<<" "<<pretya;
  return 0;
}
