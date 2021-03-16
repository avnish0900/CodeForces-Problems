#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;cin>>t;
  while(t--){
    long long n,k;cin>>n>>k;
    string s;cin>>s;
    long long w=0;
    bool W=0;
    long cur=0;
    long long ans=0;
    vector<long long >v;
   for(char c:s){
		if(c == 'W'){
			if(cur){
				v.push_back(cur);
				cur = 0;
			}
			w++;
			ans++;
			if(W) ans++;
			W = 1;
		}
		else{
			W = 0;
			if(w){
				cur++;
			}
		}
	}
if(!w){
		cout << max(2 * k - 1, 0LL) << "\n";
	}    else {
      if(k>(n-w)){
        k=abs(n-w);
      }
      ans += 2 * k;
	sort(v.begin(),v.end());
	for(int x:v){
		if(x <= k){
			// cout << "YO";
			ans++;
			k -= x;
		}
	}
	cout << ans << "\n";
    }
  }
}
