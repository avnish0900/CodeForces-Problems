#include<bits/stdc++.h>
using namespace std;
#define int              long long int
#define all(xs)          xs.begin(), xs.end()
#define rall(xs)         xs.rbegin(), xs.rend()
#define sz(x)            (int)((x).size())
#define pb               push_back
#define ppb              pop_back
#define pf               push_front
#define ppf              pop_front
#define mp               make_pair
#define ff               first
#define ss               second
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
const int nn=1e5+10;

int countPair(vector<int>& arr,int mm, int a, int b) {
    int cnt = 0;
    int i = 0;
    int low = mm-1;
    int high = mm-1;
    while (i < high) {
        //find the lower bound such that arr[i] + arr[low] < a, 
        //meanwhile arr[i]+arr[low+1] >= a
         low = max(i, low);
         while (low > i && arr[i] + arr[low] >= a) --low;

        //find an upper bound such that arr[i] + arr[high] <= b 
        //meanwhile, arr[i]+arr[high+1] > b
        while (high > low && arr[i] + arr[high] > b) --high; 
        //all pairs: arr[i]+arr[low+1], arr[i]+arr[low+2],...,arr[i]+arr[high]
        //are in the rage[a, b], and we count it as follows.
        cnt += (high-low);
        ++i;
    }
    return cnt;
}


void solve(){
    int n,l,r;cin>>n>>l>>r;
    vector<int>arr(n);
    for(auto & i:arr){
        cin>>i;
    }
    sort(all(arr));
   int xx= countPair(arr,n,l,r);
    cout<<xx;ll;
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
