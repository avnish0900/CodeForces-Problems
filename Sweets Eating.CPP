#include<bits/stdc++.h>
using namespace std;

#define llo long long
#define all(xs) xs.begin(), xs.end()
#define mem(a, b) memset(a, (b), sizeof(a))
#define sz(x)             (llo)((x).size())
#define pb push_back
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18

int main(){
  #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


llo n,m;
cin >> n >> m;
llo a[n];
for(llo  i=0;i<n;i++){
cin >> a[i];
}
 
 sort(a,a+n);
 llo dp[n];
 dp[0]=a[0];
 for(llo i=1;i<n;i++){
 a[i]+=a[i-1];
 }

 for(llo i=0;i<n;i++){
 if(i>=m){
  a[i]+=a[i-m];
 }
 cout << a[i] << " ";

}
}


  


