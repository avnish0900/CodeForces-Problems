#include<bits/stdc++.h>

using namespace std;

int main()
{
long long int n;
int digit = 0;

cin >> n;

while(n)
{
if(n % 10 == 7 || n % 10 == 4)
digit++;

n = n / 10;
}

if(digit == 7 || digit == 4)
cout <<"YES";
else
cout << "NO";

return 0;
}
