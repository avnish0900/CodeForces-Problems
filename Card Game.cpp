#include <bits/stdc++.h>
using namespace std;
int  main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	long long t;cin>>t;
  while(t--){
    long long n,k1,k2;cin>>n>>k1>>k2;
    vector<long long >k_1(k1),k_2(k2);
    for(auto &i: k_1){
      cin>>i;
    }
    for(auto &j: k_2){
      cin>>j;
    }
    long long max_k_1=*max_element(k_1.begin(), k_1.end());
    long long max_k_2=*max_element(k_2.begin(), k_2.end());
    cout<<(max_k_1 > max_k_2 ? "YES\n" : "NO\n");
  }
	return 0;
}
