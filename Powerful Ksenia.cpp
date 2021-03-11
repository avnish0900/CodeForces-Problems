#include<bits/stdc++.h>
using namespace std;
signed main(){
  int n;cin>>n;
   int a[n],sum=0;
  for( int i=0;i<n;i++){
    cin>>a[i];
    sum^=a[i];
  }
  if(n%2==0){
    
    if(sum)puts("NO"),exit(0);
    n--;
  }
    puts("YES");
	printf("%d\n",n-1);
	for( int  i=1;i<=n-2;i+=2)printf("%d %d %d\n",i,i+1,i+2);
	for(  int i=1;i<=n-2;i+=2)printf("%d %d %d\n",i,i+1,n);
  
}
