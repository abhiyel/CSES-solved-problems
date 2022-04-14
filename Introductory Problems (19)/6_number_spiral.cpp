#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

long long getN(long long r,long long c){
	if(r>c) return r;
	else return c;
}

long long getTopRightOfSquareN(long long n){
	if(n%2==1) return n*n;
	else return ((n-1)*(n-1))+1;
}

long long getBottomLeftOfSquareN(long long n){
	long long a = getDiff(n);
	long long b = getTopRightOfSquareN(n);
	long long bl;
	if(n%2==0) bl = b + a;
	else bl = b - a;
	
	return bl;
}

int main()
{
	FAST;
	long long t; cin >> t;
	
	for(long long ti=0;ti<t;ti++){
		long long y,x; //r=y
		cin >> y; //c=x
		cin >> x;
		long long up;
		long long inc;
		if(x%2==1){
			up = (x*x);
			inc = 1;
		}
		else up = pow(x-1,2) + 1;
		
		
		cout << startFrom + (multiplier*increment) << "\n";
	}
}