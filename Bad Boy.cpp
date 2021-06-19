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
   int a,b,i,j;
   cin>>a>>b>>i>>j;
   if(i==1 and j==1 and a==1 and b==1){
    cout<<1<<" "<<1<<" "<<a<<" "<<b;ll;
    return;
   }
   if(a==1 and b!=1){
        if(j==1){
            cout<<1<<" "<<2<<" "<<1<<" "<<b;ll;
            return;
        }
        if(j==b){
            cout<<1<<" "<<b-1<<" "<<1<<" "<<1;ll;
            return;
        }
        else{
            cout<<1<<" "<<1<<" "<<1<<" "<<b;ll;
            return;
        }
   }
   if(a!=1 and b==1){
        if(i==1){
            cout<< a<<" "<<1<<" "<<2<<" "<<1;ll;
            return;
        }
        if(i==a){
            cout<<a-1<<" "<<1<<" "<<1<<" "<<1;ll;
            return;
        }
        else{
            cout<<1<<" "<<1<<" "<<a<<" "<<1;ll;
            return;
        }
   }
   if(i==1 and j==1){
    cout<<1<<" "<<2<<" "<<a<<" "<<b;ll;
    return;
   }
   if(i==1 and j==b){
    cout<<a<<" "<<1<<" "<<1<<" "<<b-1;ll;
    return;
   }
   if(i==a and j==1){
    cout<<a-1<<" "<<1<<" "<<1<<" "<<b;ll;
    return;
   }
   if(i==a and j==b){
    cout<<1<<" "<<1<<" "<<a<<" "<<b-1;ll;return;
   }
   cout<<a<<" "<<b<<" "<<1<<" "<<1;ll;
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
