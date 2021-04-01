#include<bits/stdc++.h>
using namespace std;
vector<long long >arr;
bool funcc(long long n){
  long long temp=n;
  while(temp){
    long long digit=temp%10;
    temp=temp/10;
    if(digit==0){ continue;}
    if(n%digit!=0){ return false;}
  }
  return true;
}
int main() {
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;
    for(long long i=0;true;i++){
      bool ans=funcc(n);
      if(ans==true){
        cout<<n<<endl;
        break;
      }else{ n+=1;}
    }
	}
	return 0;
}
