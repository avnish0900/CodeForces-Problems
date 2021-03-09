#include<bits/stdc++.h>
using  namespace std;
int main(){
  long long t;cin>>t;
  while(t--){
    long long n,dumplicat_n;cin>>n;
    dumplicat_n=n;
    long long count;
    vector< pair<int,long long> >primes;
    for (long long i = 2; i * i <= n; ++i) {
			 count = 0;
			while (n % i == 0) {
				++count;
				n /= i;
			}
			if (count > 0) {
				primes.push_back({count, i});
			}
		}
		if (n > 1) {
			primes.push_back({1, n});
		}
    long long product=1;
    if(n>1){ primes.push_back({1,n});}
    //sort(primes.rbegin(),primes.rend());
    long long maxi=INT_MIN,maxi_indx;
    for(long long i=0;i<primes.size();i++){
      long long temp=primes[i].first;
     // maxi=max(maxi,temp);
      if(maxi< temp){
        maxi=temp;
        maxi_indx=i;
      }
    }
    /*for(long long i=0;i<primes.size();++i){
      cout<<primes[i].first<<" , "<<primes[i].second<<endl;
    }*/
    if(maxi>1){
      cout<<primes[maxi_indx].first<<"\n";
      for(long long i=0;i<(primes[maxi_indx].first)-1;i++){
        cout<<primes[maxi_indx].second<<" ";
        product*=primes[maxi_indx].second;
      }cout<<dumplicat_n/product<<endl;
    }

     /* for(long long i=1;i<primes.size();i++){
        product*=(int)(pow(primes[i].second,primes[i].first) +0.5);
      }
      cout<<product*primes[0].second<<endl;*/
    
   else{
      cout<<1<<'\n';
      cout<<dumplicat_n<<endl;
    } 
  }
  return 0;
}
