#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	long long moves = 0;
	
	for(long long i=0;i<n;i++){
		
		if(i == (n-1)){
			break;
		}
		
		if(arr[i] > arr[i+1]){
			moves += arr[i] - arr[i+1];
			arr[i+1] = arr[i];
		}
	}
	cout << moves;
	
	
}