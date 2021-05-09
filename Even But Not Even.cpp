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


int sum(string str)
{
    int sum = 0;
 
    // Traversing through the string
    for (int i = 0; i < str.length(); i++) {
        // Since ascii value of
        // numbers starts from 48
        // so we subtract it from sum
        sum = sum + str[i] - 48;
    }
    return sum;
}

void solve() {
  int l;
  cin>>l;
  string s;cin>>s;
  int ss=sum(s);

  if(s[l-1]%2!=0 and ss%2==0){
    cout<<s;
    ll;
    return;
  }
  if(s[l-1]%2!=0 and ss%2!=0){
    int count=0;
    string str="";
    for(int i=0;i<l;i++){
      if(s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9'){
        str+=s[i];
        count++; 
      }
    }
   if(count==0 || count==1){
    cout<<"-1\n";
    ll;
    return ;
   }
   else{
      if(sz(str)%2!=0){
        for(int i=0;i<sz(str)-1;i++){
          cout<<str[i];
        }
        ll;
        return ;
      }
      cout<<str;
      ll;
    }
    return ;
  }
  if(s[l-1]%2==0 and ss%2==0){
    int count=0;
    string str="";
    for(int i=0;i<l;i++){
       if(s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9'){
        str+=s[i];
        count++;
       }
    }
    if(count==0 || count==1){
      cout<<"-1\n";
      return ;
    }
    else{
      if(sz(str)%2!=0){
        for(int i=0;i<sz(str)-1;i++){
          cout<<str[i];
        }
        ll;
        return ;
      }
      cout<<str;
      ll;
      return;
    }
  }
  if(s[l-1]%2==0 and ss%2!=0){
    int count=0;
    string str="";
    for(int i=0;i<l;i++){
       if(s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9'){
        str+=s[i];
        count++;
       }
    }
    if(count==0 || count==1){
      cout<<"-1\n";
      return ;
    }
    else{
      if(sz(str)%2!=0){
        for(int i=0;i<sz(str)-1;i++){
          cout<<str[i];
        }
        ll;
        return ;
      }
      cout<<str;
      ll;
      return;
    }
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
  while(t--){
    solve();                                                    
  }
}

