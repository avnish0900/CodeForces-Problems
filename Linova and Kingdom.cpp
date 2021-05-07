#include<bits/stdc++.h>
using namespace std;
#define int              long long int
#define fast             ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define all(xs)          xs.begin(), xs.end()
#define rall(xs)         xs.rbegin(), xs.rend()
#define mem1(a)          memset(a,-1,sizeof(a))
#define mem0(a)          memset(a,0,sizeof(a))
#define sz(x)            (int)((x).size())
#define pb               push_back
#define mp               make_pair
#define prec(n)          fixed<<setprecision(n)
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
#define debug(x) cout << (#x) << " is " << (x) << "\n"
#define debug2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"
#define in_range(x, y, n, m) (x < n && y < m && x >= 0 && y >= 0)
int INF = 1e17;
int NINF= (INF*-1);
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

vector<int> indegree;
vector<vector<pair<int,int>>> adj;
vector<int> distances;
vector<vector<int> > arr;
vector<bool> visited;
vector<int> level,height;
vector<int> ans;
int r,c,x;

int dfs(int src,int parent=-1,int l=0){
  level[src]=l;
  int ht=0;
  for(auto node : arr[src]){
    if(node==parent){
      continue;
    }
    dfs(node, src,l+1);
    ht+=height[node];
  }
  height[src]+=(1+ht);
}

void solve(){
  cin>>r;
  cin>>x;
  arr.resize(r+1);
  level.resize(r+1);
  height.resize(r+1);
  for(int i=0;i<r-1;i++){
    int to,from;
    cin>>to>>from;
    arr[to].pb(from);
    arr[from].pb(to);
  }
  dfs(1);
  vector<int> path;
  for(int i=1;i<=r;i++){
    path.pb(level[i]- (height[i]-1));
  }
  int ans=0;
  sort(all(path));
  reverse(all(path));
  for(int i=0;i<x;i++){
    ans+=path[i];
  }
  cout<<ans<<endl;
}
signed main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  fast;
  int t=1;
  //cin>>t;
  while(t--){
    solve();                                                    
  }
}

