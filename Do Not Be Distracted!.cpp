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
  #define inf              (1<<28)
  #define SZ               200005
  int gcd(int A,int B){    return (B == 0) ? A : gcd(B, A % B);}
  int lcm(int A,int B){    return A * B / gcd(A, B);}
  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
  const int N = 1e6 + 1;
  vector<bool> visited;

  void solve(){
    int n;
    cin>>n;
    string s;cin>>s;
    map<char,int> m;
    m[s[0]]++;
    for(int i=1;i<n;i++){
      if(m[s[i]] >=1){
        if(s[i-1]!=s[i]){
          no;ll;
          return ;
        }
      }
      else{
        m[s[i]]++;
      }
    }
    yes;ll;
    return ;
  }

  signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int t=1;
    visited.resize(N,true);
    for(int i=2;i*i<=N;i++){
      if(visited[i]){
        for(int j=i*i; j<=N; j+=i){
          visited[j]= false;
        }
      }
    }
    cin>>t;
    while(t--){
      solve();                                                    
    }
  }
