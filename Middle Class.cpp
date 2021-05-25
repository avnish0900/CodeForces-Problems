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
#define inf18            1e18
#define SZ               200005
int gcd(int A,int B){    return (B == 0) ? A : gcd(B, A % B);}
int lcm(int A,int B){    return A * B / gcd(A, B);}
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
const int N = 1e6 + 11;

void solve(){
  int n,x;
  cin>>n>>x;
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(all(a));reverse(all(a));
  int i=0;
  int ans=0,sum=0;
  for( i=0;i<n;i++){
    sum+=a[i];
    if(((sum)/(i+1))>=x){
      ans++;
    }
    else{
      cout<<ans;ll;return ;
    }
  }
  cout<<ans;ll;
  return;
}

signed main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int t=1;
  cin>>t;
  for(int i=0;i<t;i++){
    // cout<<"Case #"<<i+1<<": "; 
    solve();                                                    
  }
}
