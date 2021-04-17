#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n;cin>>n;
  vector<long long >a(n);
  for(auto &i: a){
    cin>>i;
  }
  long long changes=0,index=0;
  for (long long i=0;i<n-1;i++){
    if (a[i] > a[i + 1]) index = i, changes++;
  }
  if (a[n - 1] > a[0]) index = n - 1, changes++;
  if (changes == 0) cout << 0 << endl;
  else if (changes > 1) cout << -1 << endl;
  else cout << n - 1 - index << endl;
}
