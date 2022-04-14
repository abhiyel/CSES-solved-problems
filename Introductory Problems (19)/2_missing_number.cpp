#include<iostream>

using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long sum_to_n = (n*(n+1))/2;
	long long sum = 0;
	long long x;
	for(long long i=1;i<n;i++){
		cin >> x;
		sum += x;
	}
	cout << sum_to_n - sum;
}