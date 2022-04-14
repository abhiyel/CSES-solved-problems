#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main()
{
	FAST;
	long long n; cin >> n;
	long long sum = (n*(n+1))/2;
	long long req_sum = sum/2;
	if(sum%2==1) cout << "NO\n";
	else{
		long long bit[n];
		long long curr_sum = 0;
		for(long long i=0;i<n;i++) bit[i] = 1;
		long long last_unused = n;
		while(true){
			if(req_sum - curr_sum > last_unused){
				for(long long j=last_unused-1;j>=0;j--){
					if(bit[j] == 1){
						bit[j] = 0;
						curr_sum=curr_sum+j+1;
						last_unused = j - 1;
						break;
					}
				}
			}
			else if(bit[req_sum - curr_sum - 1]==1){
				bit[req_sum - curr_sum - 1] = 0;
				curr_sum=req_sum;
				break;
			}
		}
		
		cout << "YES\n";
		int count_1 = 0;
		for(long long i=0;i<n;i++) if(bit[i]==0) count_1++;
		cout << count_1 << "\n";
		for(long long i=0;i<n;i++) if(bit[i]==0) cout << i+1 << " ";
		cout << "\n" << n-count_1 << "\n";
		for(long long i=0;i<n;i++) if(bit[i]==1) cout << i+1 << " ";
		cout << "\n";
		
	}
}