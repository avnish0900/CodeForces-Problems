#include <bits/stdc++.h>
using namespace std;
int main(){
  long long n;cin>>n;
  map<string,long long >s;
  long long times=1;
  for(long long i=0;i<n;i++){string name;cin>>name;
    if(s[name]!=0){
      cout<<name<<s[name]++<<endl;
    }
    else{
      cout<<"OK\n";
      s[name]++;
    }
  }
}
