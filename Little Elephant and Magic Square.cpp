#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long a[4][4];
  for(long long i=1;i<=3;i++){
    for(long long j=1;j<=3;j++){
      cin>>a[i][j];
    }
  }
    a[2][2]=(a[1][2]+a[1][3]+a[3][1]+a[3][2]-a[2][1]-a[2][3])/2;
    a[3][3]=a[2][1]+a[2][3]-a[3][1]-a[3][2]+a[2][2];
    a[1][1]=a[3][1]+a[3][2]+a[3][3]-a[1][2]-a[1][3];
    for(long long i=1;i<=3;i++){
      for(long long j=1;j<=3;j++){
        cout<<a[i][j]<<" ";
      }cout<<endl;
    }
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	long long t=1;
	//cin>>t;
	while(t--) {solve();}
}
