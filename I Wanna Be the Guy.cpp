#include<bits/stdc++.h>
using namespace std;
int  main(){
  long long n;cin>>n;
  long long p;cin>>p;
  set<long long >check;long long level;
  for(long long i=0;i<p;i++){cin>>level; check.insert(level);} 
  long long q;cin>>q;
  for(long long i=0;i<q;i++){ cin>>level;check.insert(level);}
  if(check.size()==n){cout<<"I become the guy."<<endl; } 
  else{ cout<<"Oh, my keyboard!"<<endl;}
}
