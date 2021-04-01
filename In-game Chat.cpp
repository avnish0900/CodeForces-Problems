#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;cin>>t;
	while(t--){
		int x;cin>>x;
   char a[x];
   for(int i=1;i<=x;i++){
   cin>>a[i];
   }
   int cnt=0;
   for(int i=x;i>=1;i--){
   	if(a[i]==')'){
   			cnt++;
   	}else{
   	break;
   	}
   }
   int left=x-cnt;
   if(cnt>left){
   	cout<<"YES"<<endl;
   }else{
   	cout<<"NO"<<endl;
   }
	}
	return 0;
}
