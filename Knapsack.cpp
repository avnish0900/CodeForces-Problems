#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;cin>>t;
  while(t--){
    long long n,w;cin>>n>>w;
    long long a[n];
    for(long long i=0;i<n;i++){
      cin>>a[i];
    }	
    long long flag=0;
		long long c=0;
		vector<long long>v;
		for(long long i=0;i<n;i++)
		{
			if(c+a[i]<=w)
			{
				v.push_back(i+1);
				c+=a[i];
			}
			if(c>=(w+1)/2)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			long long max=0,maxi=-1;
			for(long long i=0;i<n;i++)
			{
				if(a[i]<=w)
				{
					if(max<a[i])
					{
					max=a[i];
					maxi=i+1;
					}
				}
			}
			if(max>=(w+1)/2)
			{
				cout<<1<<endl;
				cout<<maxi<<endl;
			}
			else
			cout<<-1<<endl;
		}
		else{
			cout<<v.size()<<endl;
			for(long long i=0;i<v.size();i++)
			cout<<v[i]<<" ";
			cout<<endl;
 
 
		}
  }
  return 0;
}
