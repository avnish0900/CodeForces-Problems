#include<bits/stdc++.h>
using namespace std;
#define int              long long int
#define all(xs)          xs.begin(), xs.end()
#define rall(xs)         xs.rbegin(), xs.rend()
#define sz(x)            (int)((x).size())
#define pb               push_back
#define mp               make_pair
#define prec(n)          fixed<<setprecision(n)
#define debug(x)         cout << (#x) << " is " << (x) << "\n"
#define debug2(x, y)     cout << #x << "=" << x << "," << #y << "=" << y << "\n"
#define debug3(x, y,z)   cout << #x << "=" << x << "," << #y << "=" << y << "," << #z << "=" << z << "\n"
#define yes              cout<<"YES";
#define no               cout<<"NO";
#define ll               cout<<"\n";
#define nil              0
#define inf              1e15
#define SZ               200005
int gcd(int A,int B){    return (B == 0) ? A : gcd(B, A % B);}
int lcm(int A,int B){    return A * B / gcd(A, B);}
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
const int N = 1e9 + 7;
vector<bool> visited;

void solve(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  if(n==1){
    cout<<0;ll;
    return ;
  }
  vector<pair<int,int>> index;
  vector<pair<int,int>> val;
  for(int i=1;i<n;i+=2){
    val.pb(mp(min(a[i],a[i-1]),N));
    index.pb(mp(i-1,i));
  }
  cout<<sz(index);ll;
  for(int i=0;i<sz(index);i++){
    cout<<index[i].first+1<<" "<<index[i].second+1;
    cout<<" "<<val[i].first<<" "<<val[i].second;ll;
  }
  return ;
}

signed main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int t=1;
  cin>>t;
  while(t--){
    solve();                                                    
  }
}
