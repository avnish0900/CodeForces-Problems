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
    int n;cin>>n;
    int mini =-1,maxi=-1;
    int mi=INT_MAX,ma=INT_MIN;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>ma){
            ma=arr[i];
            maxi=i;
        }
        if(arr[i]<mi){
            mi =arr[i];
            mini=i;
        }
    }
    int a=0,b=0;
    int ml=0;
    for(int i=0;i<n;i++){
        if(a==1 and b==1){
            break;
        }
        ml++;
        if(arr[i]==ma){
            a=1;
        }
        if(arr[i]==mi){
            b=1;
        }
    }
    int mr=0;
    a=0,b=0;
    for(int i=n-1;i>=0;i--){
        if(a==1 and b==1){
            break;
        }
        mr++;
        if(arr[i]==ma){
            a=1;
        }
        if(arr[i]==mi){
            b=1;
        }
    }
    int left =-1;
    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(arr[i]==mi or arr[i]==ma){
            left=i;
            x++;
            break;
        }
        x++;
    }
    int right=-1;
    for(int i=n-1;i>=0;i--){
        if(arr[i]==mi or arr[i]==ma){
            right=i;
            y++;
            break;
        }
        y++;
    }
    // debug2(x,y);
    int ans = min(ml,mr);
    int pp = x+y;
    ans = min(ans,pp);
    // debug3(ml,mr,pp);
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
