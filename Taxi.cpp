#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n;cin>>n;
  long long arr[n],a=0,b=0,c=0,d=0;
  for(long long i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==1){a+=1;}
    if(arr[i]==2){b+=1;}
    if(arr[i]==3){c+=1;}
    if(arr[i]==4){d+=1;}
  } long long s=0;
  s+=d;
     while(c>0&&a>0){s++;c--;a--;}
     while(b>0&&a>1){s++;b--;a=a-2;}
     while(b>0&&a>0){s++;b--;a--;}
     s=s+a/4;a=a%4;s=s+b/2;b=b%2;
     if(a>0){s++;a=0;}if(b>0){s++;b=0;}
     s=s+a+b+c;
     cout<<s<<endl;
    
   return 0;
}
