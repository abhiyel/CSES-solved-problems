#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main()
{
	FAST;
	long long num;cin >> num;
	for(long long n=1;n<=num;n++)
	{
		cout << (n*n*(n*n-1)/2) - 4*(n-1)*(n-2) << "\n";
	}
}