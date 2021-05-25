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

const int N = 1e5+5;
vector<int> l(N), r(N);
vector<int> adj[N];
pair<int,int> dfs(int a, int parent){
    pair<int,int> cur_tree;
    for(int b : adj[a]) {
        if(b == parent) {
            continue;
        }
        else{
            pair<int,int> cur_point = dfs(b, a);
            cur_tree.first += max(cur_point.first + abs(l[a] -l[b]),cur_point.second + abs(l[a] - r[b]));
            cur_tree.second += max(cur_point.first + abs(r[a] - l[b]),cur_point.second + abs(r[a] - r[b]));
        }
    }
    return cur_tree;
}


void solve(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        cin>>l[i];
        cin>>r[i];
    }
    for(int i=0;i<n-1;i++){
        int x,y;cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    pair<int,int> ans = dfs(1,-1);
    cout<< max( ans.first, ans.second);ll;
    for(int i = 0; i <= n; ++i) {
        adj[i].clear();
    }
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
