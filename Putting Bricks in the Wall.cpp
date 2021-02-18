#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    char arr[n][n];
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cin>>arr[i][j];
      }
    }
    int a=arr[0][1]-'0';
    int c=arr[n-1][n-2]-'0';
    int d=arr[n-2][n-1]-'0';
    int b=arr[1][0]-'0';
    if(a==b&&c==d)
        {
            if(a!=c)
            {
                 cout<<0<<endl;
                 continue;
            }
           if(a==c)
           {
               cout<<2<<endl;
               cout<<1<<' '<<2<<endl;
               cout<<2<<' '<<1<<endl;
               continue;
           }
        }
        else if(a==b&&c!=d)
        {
            if(a==c)
            {
                cout<<1<<endl;
                cout<<n<<' '<<(n-1)<<endl;
                continue;
            }
            else
            {
                cout<<1<<endl;
                cout<<(n-1)<<' '<<n<<endl;
                continue;
            }
        }
        else if(a!=b&&c==d)
        {
            if(a==c)
            {
                cout<<1<<endl;
                cout<<1<<' '<<2<<endl;
                continue;
            }
            else
            {
                cout<<1<<endl;
                cout<<2<<' '<<1<<endl;
                continue;
            }
        }
        else if(a!=b&&c!=d)
        {
            if(a==d)
            {
                cout<<2<<endl;
                cout<<1<<' '<<2<<endl;
                cout<<n<<' '<<n-1<<endl;
                continue;
            }
            else
            {
                cout<<2<<endl;
                cout<<1<<' '<<2<<endl;
                cout<<n-1<<' '<<n<<endl;
                continue;
            }
        }
    }
}
