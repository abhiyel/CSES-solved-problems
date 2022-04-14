#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main()
{
	FAST;
	long long n; cin >> n;
	long long nbitstrings = 1;
	for(int i=0;i<n;i++){
		nbitstrings = (2*nbitstrings)%1000000007;
	}
	cout << nbitstrings << "\n";
}