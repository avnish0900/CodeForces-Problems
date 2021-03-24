#include <bits/stdc++.h>
using namespace std;
long long  func(long long  a,long long  b,long long  c,long long  d){
			vector<long long > v(4);
			v[0]=a;
			v[1]=b;
			v[2]=c;
			v[3]=d;
			sort(v.begin(),v.end());
			return ((v[1]+v[2])/2);
		}
    int  main() {
  long long t;cin>>t;
  while(t--){
  
			long long  n,m;
			cin >> n >> m;
			long long  grid[n+1][m+1];
			for(long long  i(1);i<=n;++i){
				for(long long  j(1);j<=m;++j){
					cin >> grid[i][j];
				}
			}
			long long  ans[n+1][m+1];
			for(long long  i(1);i<=n;++i){
				for(long long  j(1);j<=m;++j){
					ans[i][j]=0;
				}
			}
			for(long long  i(1);i<=n;++i){
				for(long long  j(1);j<=m;++j){
					long long  u=func(grid[i][j],grid[n+1-i][j],grid[i][m+1-j],grid[n+1-i][m+1-j]);
					ans[i][j]=u;
				}
			}
			 long long  fin=0;
			for(long long  i(1);i<=n;++i){
				for(long long  j(1);j<=m;++j){
					fin+=abs(grid[i][j]-ans[i][j]);
				}
			}
      cout<<fin<<endl;
  }
}
