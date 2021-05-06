#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define all(xs)          xs.begin(), xs.end()
#define mem(a, b)        memset(a, (b), sizeof(a))
#define sz(x)            (int)((x).size())
#define pb               push_back
#define mp               make_pair
int inf = 1e17;
vector<int> adj[200001];
int distances[200001];
bool visited[200001];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
int n,m,x;

int dfs(int src){
  visited[src]=true;
  int count=1;
  for(auto e: adj[src]){
    if(visited[e]==false){
      count+=dfs(e);
    }
  }
  return distances[src]=count;
}
 
void solve(){
  
  string str1;cin>>str1;//input
  int n1 = stoll(str1, nullptr, 10);//input 
  if(n1<2050){
    cout<<"-1\n";
    return;
  }
  string str2="2050";
  int pp=2050;
  if(str1.size()<str2.size()){
    cout<<"-1\n";
     cout<<"hello\n";
    return ;
  }
  int count=0;
  int dif = str1.size()-str2.size();
  int newnum = stoll(str2, nullptr, 10);
  newnum*=pow(10,dif);
  //cout<<pow(10,dif)<<endl;
  //cout<<newnum<<endl;
  if(dif>=1){
    //count+=1;
  }
  bool possible = true;
  //cout<<count<<endl;
  //cout<<"newnum ="<<newnum<<"   count = "<<count<<endl;
  while(true){
    if(n1==0){
      break;
    }
    if(n1<0 || n1<2050){
      possible = false;
      break;
    }
    
    if(n1<newnum){
      //cout<<"here\n";
      //cout<<"n1="<<n1<< "  newnum ="<<newnum<<endl;
      int same=false;
      for(int i=0;i<10;i++){
        newnum/=10;
        if(n1==newnum){
          //cout<<"same\n";
          same=true;
          break;
        }
        if(n1>newnum){
          break;
        }
      }
      if(same==false){
        //newnum*=10;
      }
      //newnum/=10;
      //cout<<"new no =\n"<<newnum<<endl;
      //cout<<n1<<endl;
    }
    // if(n1%pp==0){
    //   cout<<"yes\n";
    //   break;
    // }
    n1-=newnum;
    //cout<<"no="<<n1<<endl;
    
    count+=1;
    //cout<<"count"<<count<<endl;
  }
  if(!possible){
    cout<<"-1\n";
    return ;
  }
  cout<<count<<"\n";
}

signed main(){
  // #ifndef ONLINE_JUDGE
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  // #endif
  int t=1;
  cin>>t;
  while(t--){
    solve();
  }
}
