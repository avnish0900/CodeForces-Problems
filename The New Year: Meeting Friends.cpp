#include <bits/stdc++.h>
using namespace std;
double findMedian(long long  a[], long long n)
{
	// First we sort the array
	sort(a, a + n);

	// check for even case
	if (n % 2 != 0)
		return (double)a[n / 2];

	return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
}
void solve(){
  long long n=3;
  long long a[n];
  for(long long i=0;i<n;i++){
    cin>>a[i];
  }
  cout<<abs(abs(findMedian(a,n)-a[0])+(abs(findMedian(a,n)-a[1]))+(abs(findMedian(a,n)-a[2])))<<endl;
}

int  main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  long long  t;t=1;//cin>>t;
  while(t--){solve();}
}
