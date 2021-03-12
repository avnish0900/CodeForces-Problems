#include <bits/stdc++.h>
using namespace std;
int main() {
  long long t;
  cin>>t;
  while(t--){
    long long a,b;cin>>a>>b;
    string s;cin>>s;
    long long first=-1,last=-1;
    long long sum0=0;
     for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='1')
            {
                first =i;
                break;
            }
        }
        for (int i = s.size()-1; i >=0; i--)
        {
            if (s[i] == '1')
            {
                last = i;
                break;
            }
        }
    if(first==last && first == -1)
        {
            cout<<0<<"\n";
            continue;
        }
        int ans=a;
        int cha=INT_MAX;
        for (int i = first; i <= last; i++)
        {
            int c=0;
            while(s[i]=='0')
            {
                c++;
                i++;
            }
            ans += min(a,b*c);
        }
        cout<<ans<<"\n";
        
    
        
  }
}
