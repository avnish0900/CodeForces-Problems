#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,m,r,c;
        cin >> n >> m >> r >> c;
        int maxi=abs(r-1)+abs(c-1);
        maxi=max(abs(r-1)+abs(c-m),maxi);
        maxi=max(abs(r-n)+abs(c-1),maxi);
        maxi=max(abs(r-n)+abs(c-m),maxi);
        cout << maxi << endl;
    }
    return 0;
}
