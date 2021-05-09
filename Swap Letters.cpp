#include<bits/stdc++.h>
 
using namespace std;
 
int n;
char a[200010], b[200010];
vector<int> A, B;
vector<pair<int,int> > Q;
 
int main() {
    scanf("%d",&n);
    scanf(" %s",a);
    scanf(" %s",b);
    for(int i = 0 ; i < n ; i++) {
        if(a[i] == b[i]) continue;
        if(a[i] == 'a' && b[i] == 'b') {
            if(A.size()) {
                Q.push_back({A.back(), i + 1});
                A.pop_back();
            }
            else A.push_back(i + 1);
        }
        else {
            if(B.size()) {
                Q.push_back({B.back(), i + 1});
                B.pop_back();
            }
            else B.push_back(i + 1);
        }
    }
    if(A.size() == 1 && B.size() == 1) {
        Q.push_back({A.back(), A.back()});
        Q.push_back({A.back(), B.back()});
        A.pop_back();
        B.pop_back();
    }
    if(A.size() || B.size()) puts("-1");
    else {
        printf("%d\n",(int)Q.size());
        for(auto i : Q) printf("%d %d\n",i.first, i.second);
    }
    return 0;
}
