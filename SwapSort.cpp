#include<bits/stdc++.h>
using namespace std;
#define int              long long int
#define all(xs)          xs.begin(), xs.end()
#define rall(xs)         xs.rbegin(), xs.rend()
#define sz(x)            (int)((x).size())
#define pb               push_back
#define mp               make_pair
#define prec(n)          fixed<<setprecision(n)
#define forr(i,a,b)       for(int i=a;i<b;i++)
#define debug(x)         cout << (#x) << " is " << (x) << "\n"
#define debug2(x, y)     cout << #x << "=" << x << "," << #y << "=" << y << "\n"
#define yes              cout<<"YES";
#define no               cout<<"NO";
#define ll               cout<<"\n";


int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
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


int dfs(int src,int parent=-1,int l=0){
  
}
// 6
// 27
// 39
// 11
// 17


void solve(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int i=0;
  int j=n-1;
  int ans=0;
  vector<pair<int,int>> swaps;
  for(int i=0;i<n;i++){
    int ii=i;
    for(int j=n-1;j>=i+1;j--){
      if(a[ii]> a[j]){
        ii=j;
      }
    }
    if (ii != i) {
     swaps.push_back(mp(i, ii));          
     swap(a[i], a[ii]);
    }
  }
  cout<<sz(swaps);
  ll;
  for(auto i: swaps){
    cout<<i.first<<" "<<i.second;
    ll;
  }
}


signed main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int t=1;
  //cin>>t;
  while(t--){
    solve();                                                    
  }
}

