#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	cin >> str;
	int max = 1;
	int curr = 1;
	
	for(int i=0;i<str.length();i++){
		if(i==0) continue;
		
		if(str[i] != str[i-1]){
			if(curr>max) max = curr;
			curr = 1;
		}
		else{
			curr++;
		}
		
		if((i==str.length()-1)){
			if(curr>max) max = curr;
			break;
		}		
		
	}
	cout << max;
}