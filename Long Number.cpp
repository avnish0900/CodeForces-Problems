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


void solve(){
  int n;cin>>n;
  string s;cin>>s;
  vector<int> one;
  vector<int> two;
  vector<int> three;
  vector<int> four;
  vector<int> five;
  vector<int> six;
  vector<int> seven;
  vector<int> eight;
  vector<int> nine;
  for(int i=0;i<n;i++){
    if(s[i]=='1'){
      one.pb(i);
    }
    if(s[i]=='2'){
      two.pb(i);
    }
    if(s[i]=='3'){
      three.pb(i);
    }
    if(s[i]=='4'){
      four.pb(i);
    }
    if(s[i]=='5'){
      five.pb(i);
    }
    if(s[i]=='6'){
      six.pb(i);
    }
    if(s[i]=='7'){
      seven.pb(i);
    }
    if(s[i]=='8'){
      eight.pb(i);
    }
    if(s[i]=='9'){
      nine.pb(i);
    }
  }
  map<int,int> m;
  for(int i=1;i<=9;i++){
    int x;cin>>x;
    m[i]=x;
  }
  string original = s;
  string duplicate = original;
  int done=0;
  for(int i=0;i<n;i++){
    int cur = s[i]-48;
    int new_val = m[cur];
    if(new_val>cur){
      done=1;
      duplicate[i]=new_val+'0';
    }
    if(done==1 and new_val<cur){
      break;
    }
  }
  if(duplicate>original){
    cout<<duplicate;ll;
    return;
  }
  cout<<original;ll;
  return;
}

signed main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int t=1;
  // cin>>t;
  for(int i=0;i<t;i++){
      // cout<<"Case "<<i+1<<": ";
    solve();                                                    
  }
}
