#include <bits/stdc++.h>
using namespace std;
int  main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	long long n,t;cin>>n>>t;
  long long left=240-t,require=0;
  long long solved=n;
  for(long long i=1;i<=n;i++){
    require+=5*i;
    if(require>left){
      solved=i-1;
      break;
    }
  }
	cout<<solved<<"\n";
	return 0;
}
