#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long n,m;cin>>n>>m;
  long long i=0;
  for( i=1;i<=(100001);i++){
    n--;
    if(i%m==0){ n++;}
    if(n==0){break; }
  }
  
  cout<<i<<endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	long long t=1;
	//cin>>t;
	while(t--) {solve();}
}
