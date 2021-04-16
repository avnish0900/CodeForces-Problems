#include<bits/stdc++.h>
using namespace std;
int main(){
  long long  r, x1, y1, x2, y2;
  cin >> r >> x1 >> y1 >> x2 >> y2;
  double d = sqrt(pow(y2 - y1, 2.0) + pow(x2 - x1, 2.0));
  cout << (long long )(ceil)(d / r / 2) << "\n";
}
