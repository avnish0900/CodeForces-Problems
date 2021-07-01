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
#define ff               first
#define ss               second
#define prec(n)          fixed<<setprecision(n)
#define debug(x)         cout << (#x) << " is " << (x) << "\n"
#define debug2(x, y)     cout << #x << "=" << x << "," << #y << "=" << y << "\n"
#define debug3(x, y,z)   cout << #x << "=" << x << "," << #y << "=" << y << "," << #z << "=" << z << "\n"
#define yes              cout<<"YES";
#define no               cout<<"NO";
#define ll               cout<<"\n";
#define SZ               2e9
int gcd(int A,int B){    return (B == 0) ? A : gcd(B, A % B);}
int lcm(int A,int B){    return A * B / gcd(A, B);}
const int N=1e6;
const int NN=1e9+10;
//============================================================================================================


void solve(){
    int n;cin>>n;
    vector<int> a(n),arr(2*n+1,N);
    int idx=0;
    for(auto &i:a){
        cin>>i;
        arr[i]=idx+1;idx++;
    }
    int ans=0;
    for(int i=3;i<=(2*n)-1;i++){
        for(int j=1;j<=sqrt(i);j++){
            int aa=i%j;
            int pro = j*j;
            bool bb=(i!=pro);
            if(aa==0 and bb){
                int pos = i/j;
                int cc = arr[j]+arr[pos];
                if(cc!=i){
                    continue;
                }
                else{
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
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
