#include <bits/stdc++.h>
using namespace std;
bool sorted(vector<long long >&v){
  for(long long i=1;i<v.size();i++){
    if(v[i]<v[i-1]){
      return false;
    }
  }
  return true;
}

int main() {
  long long t;cin>> t;
  while(t--){
    long long n ,k;cin>> n>> k;
    vector<long long > v(n);

    for(long long i=0;i<n;i++){
      cin>> v[i];
    }
    long long cnt=0,flag=1;
    while(sorted(v)==false){
      cnt++;
      long long i=0;
      while(i<n && v[i]<=k){
        i++;
      }
      if(i==n){
        cout<<-1<<endl;
        flag=0;
        break;
      }
      swap(v[i],k);
    }
    if(flag==1){cout<<cnt<<endl;}
  }
}
