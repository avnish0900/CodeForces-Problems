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


void solve(){
    int a,b,c,d;
    vector<int>arr(4);
    for(int i =0;i<4;i++){
        cin>>arr[i];
    }
    a=arr[0];
    b=arr[1];
    c=arr[2];
    d=arr[3];
    sort(all(arr));
    int xx=arr[3];
    int yy=arr[2];
    // debug3(a,b,c);
    if(a==xx and c==yy){
        yes;ll;
        return;
    }
     if(a==xx and d==yy){
        yes;
        ll;
        return;
    }
     if(b==xx and c==yy){
        yes;
        ll;
        return;
    }
     if(b==xx and d==yy){
        yes;
        ll;return;
    }
     if(a==yy and c==xx){
        yes;ll;
        return;
    }
     if(a==yy and d==xx){
        yes;ll;return;
    }
     if(b==yy and c==xx){
        yes;
        ll;return;
    }
     if(b==yy and d==xx){
        yes;
        ll;return;
    }
    else{
        no;ll;return;
    }
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
