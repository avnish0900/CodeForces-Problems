#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long a,b;cin>>a>>b;
  long long side=min(a,b);
  long long lenght=2*side;
  if(max(a,b)>lenght){
    cout<<max(a,b)*max(a,b);cout<<endl;
  }
  else{
    cout<<lenght*lenght<<endl;
  }
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	long long t=1;
	cin>>t;
	while(t--) {solve();}
}
