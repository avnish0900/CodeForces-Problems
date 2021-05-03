#include<bits/stdc++.h>
using namespace std;

#define llo long long
#define all(xs) xs.begin(), xs.end()
#define mem(a, b) memset(a, (b), sizeof(a))
#define sz(x)             (llo)((x).size())
#define pb push_back
#define mod 1000000007

const llo arsz = 1e6+1; 
const long long inf = 1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;



int main(){
llo t;
cin >> t;

while(t--){
llo n,k;
cin>> n >> k;


if((n-k)<k+1){
  cout << -1 << "\n";
  continue;
}
llo a[n];
for(llo i=0;i<n;i++){
  a[i]=i+1;
}/*
for(llo  i =0;i<n;i++){
  cout<<a[i]<<" ";
}cout<<endl;*/

for(llo i=1;i<n-1;i+=2){
  if(k==0){
    break;
  }
  k--;
  llo temp=a[i];
  a[i]=a[i+1];
  a[i+1]=temp;
}


for(llo i=0;i<n;i++){
  cout <<a[i]<<" ";
}
cout << "\n";

}


}
