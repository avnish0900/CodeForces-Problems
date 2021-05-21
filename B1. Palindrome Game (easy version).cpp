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
const int N = 1e6 + 11;


bool palin(string s){
  int i=0,j=s.length()-1;
  while(i<=j){
    if(s[i]!=s[j]){
      return false;
    }
    i++;j--;
  }
  return true;
}

void solve(){
  int n;cin>>n;
  string s;cin>>s;
  int zero=0;
  for(int i=0;i<n;i++){
    if(s[i]=='0'){
      zero++;
    }
  }
  string al="ALICE";
  string bob="BOB";
  string draw="DRAW";
  if((zero==1) || (n%2==0) || (n%2==1) and s[(n)/2]=='1' ){cout<<bob;ll;return;}
  cout<<al;ll;return;
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
      // cout<<"Case "<<i+1<<": ";
    solve();                                                    
  }
}
