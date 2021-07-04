#include<bits/stdc++.h>
using namespace std;
#define int              long long
#define all(xs)          xs.begin(), xs.end()
#define rall(xs)         xs.rbegin(), xs.rend()
#define sz(x)            (int)((x).size())
#define pb               push_back
#define ppb              pop_back
#define pf               push_front
#define ppf              pop_front
#define ff               first
#define ss               second
#define prec(n)          fixed<<setprecision(n)
#define debug(x)         cout << (#x) << " is " << (x) << "\n"
#define debug2(x, y)     cout << #x << "=" << x << "," << #y << "=" << y << "\n"
#define debug3(x, y,z)   cout << #x << "=" << x << "," << #y << "=" << y << "," << #z << "=" << z << "\n"
#define yes              cout<<"Yes";
#define no               cout<<"No";
#define ll               cout<<"\n";
#define SZ               2e9
int gcd(int A,int B){    return (B == 0) ? A : gcd(B, A % B);}
int lcm(int A,int B){    return A * B / gcd(A, B);}
const int N=2e5+10;
const int NN=1e9+10;
const int mod = 1e9 + 7;
//============================================================================================================

 

void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    if(n==1){
       yes;ll;return;
    }
   int k = log(n)/log(a);
   int check = 1;
   if(a==1){
       if((n-1)%b==0){
          yes;ll;return;
       }
       else {
          no;ll;return;
        }
       return;
   } 
   while(check<=n)
   {
       if((n-check)%b==0)
       {
           yes;ll;
           return;
       }
       check = check*a;
   }
   no;ll;return;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t=1;
    cin>>t;
    for(int i=0;i<t;i++){
        // cout<<"Case #"<<i+1<<": "; 
        solve();                                                    
    }
}
