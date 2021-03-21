#include <bits/stdc++.h>
using namespace std;
int  main()
{
	long long  t;cin >> t;
	while(t--){
		long long  x;cin >> x;
		long long  i = 9,count = 0,a[10];
		long long flag = 0;
		while(i > 0){
		    if(x >= i){
			x -= i;
			a[count] = i;
			count++;
		    }
			if(x == 0){
				flag = 1;
				break;
			}
			 i--;
		}
	
	if(flag) {
		for( i = count-1; i >=0 ; i--){
			cout << a[i];
		}cout << endl;
	}
	else {cout << "-1" << endl;}
	}
}
