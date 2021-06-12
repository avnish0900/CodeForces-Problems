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
// lrr
// llr
// rll
// rrl
// lrr
// llr
// rl

void solve(){
    int n;cin>>n;
    if (!(n & 1)){
        no;ll;
        return;
    }
    yes;ll;
    vector<int> arr(2*n);
    arr[0]=1;
    arr[sz(arr)-1] = 2*n;
    int mid = arr[n-1] = (2*n)-1;
    int val = (2*n)-1-1;
    int turn = 1;
    int left = n-1-1;
    int right = sz(arr)-1-1;
    // debug2(left,right);
    mid = left+1;
    // debug(mid); 
    bool f= false;
    while((left>0 and right>mid) and f==false){
        // yes;ll;
        if(turn==1){
            // debug(left);
            arr[left] = val;
            val--;
            left--;
            if(left<=0 or right <=mid ){
                f=true;
                break;
            }
            arr[right] = val;
            val--;
            right--;
            if(left<=0 or right <=mid ){
                f=true;
                break;
            }
            arr[right] = val;
            // debug3(arr[right],right,val);
            val--;
            right--;
            turn=2;
            if(left<=0 or right <=mid ){
                f=true;
                break;
            }
        }
        else if(turn==2){
            turn=3;
            arr[left] = val;

            val--;
            left--;
            if(left<=0 or right <=mid ){
                f=true;
                break;
            }
            arr[left] = val;
            val--;
            left--;
            if(left<=0 or right <=mid ){
                f=true;
                break;
            }
            arr[right] = val;
            // debug3(arr[right],right,val);
            val--;
            right--;
            if(left<=0 or right <=mid ){
                f=true;
                break;
            }

        }
        else if(turn==3){
            turn=4;
            arr[right] = val;
            val--;
            right--;
            if(left<=0 or right <=mid ){
                f=true;
                break;
            }
            arr[left] = val;
            val--;
            left--;
            if(left<=0 or right <=mid ){
                f=true;
                break;
            }
            arr[left] = val;
            // debug3(arr[right],right,val);
            val--;
            left--;
            if(left<=0 or right <=mid ){
                f=true;
                break;
            }
        }
        else{
            turn=1;
            arr[right] = val;
            val--;
            right--;
            if(left<=0 or right <=mid ){
                f=true;
                break;
            }
            arr[right] = val;
            val--;
            right--;
            if(left<=0 or right <=mid ){
                f=true;
                break;
            }
            arr[left] = val;
            // debug3(arr[right],right,val);
            val--;
            left--;
            if(left<=0 or right <=mid ){
                f=true;
                break;
            }
        }
    }

    // for(auto i:arr){
    //     cout<<i<<" ";
    // }ll;
    // debug(arr[n]);
    if(arr[n]==0){
        arr[n]=2;
    }
    if(arr[n+1]==0){
        arr[n+1]=3;
    }
    for(auto i:arr){
        cout<<i<<" ";
    }ll;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int t=1;
    // cin>>t;
    for(int i=0;i<t;i++){
        // cout<<"Case #"<<i+1<<": "; 
        solve();                                                    
    }
}
