#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main()
{
	FAST;
	long long n,z=0; cin >> n;
	for(int i=5;n/i>=1;i*=5) z = z + (n/i);
	cout << z << "\n";
}