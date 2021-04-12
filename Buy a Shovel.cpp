#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long amount,coin;cin>>amount>>coin;
  long long times=amount;
  for(long long i=1;true;i++){
    if(amount%10==0 || (amount-coin)%10==0){
      cout<<i<<endl;
      break;
    }
    else{
      amount+=times;
    }
  }
}

int  main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  long long  t;t=1;//cin>>t;
  while(t--){solve();}
}
