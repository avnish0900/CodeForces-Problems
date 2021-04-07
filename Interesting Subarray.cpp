#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  long long  t;cin >> t;
  while (t--) {
    long long n;cin >> n;
    long long a[n];
    long long l = -1,r=0;
    for (long long i = 0 ; i < n ; i++) {
      cin >> a[i];
      if (i != 0) {
        if (abs(a[i]-a[i-1]) > 1) {
          r = i;
          l = i-1;
        }
      }
    }
    if (l == -1) {
      cout << "NO\n";
    }
    else {
      cout << "YES\n";
      cout << l+1 << " " << r+1 << "\n";
    }
  }
}
