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
// #define ss               second
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
    string s;cin>>s;
    int l=0,r=0,u=0,d=0;
    for(char ch: s){
        if(ch=='L'){
            l++;
        }
        else if(ch=='R'){
            r++;
        }
        else if(ch=='U'){
            u++;
        }
        else{
            d++;
        }
    }
    int min1= min(l,r);
    int min2=min(u,d);
    char c1=min(l,r)==l ? 'L' : 'R';
    char c2=min(u,d)==u ? 'U' : 'D';
    string ans;
    int n = s.length();
    // debug2(min1,min2);
    if(min1==0 and min2==0){
        cout<<0;ll;ll;
        return;
    }
    if(min1==0 or min2==0){
        if(min1>=1){
            cout<<"2";ll;
            cout<<"LR";ll;
        }
        if(min2>=1){
            cout<<"2";ll;
            cout<<"UD";ll;
        }
        return;
    }
    for(int i=0;i<min1;i++){
       ans+='L';
    }
    for(int i=0;i<min2;i++){
       ans+='U';
    }

    for(int i=0;i<min1;i++){
       ans+='R';
    }

    for(int i=0;i<min2;i++){
       ans+='D';
    }
    cout<<ans.length();ll;
    cout<<ans;ll;
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
