#include <bits/stdc++.h> 
using namespace std; 
int main() { 
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);  
  long long t;cin>>t;
  while(t--){
    string s;cin>>s;
     if(s.length() & 1){
       cout<<"NO\n";
     }
     else{
       if(s[0]==')'  || s[s.length()-1]=='('){ 
         cout<<"NO\n";
       }
       else{
         cout<<"YES\n";
       }
     }
  }
}
