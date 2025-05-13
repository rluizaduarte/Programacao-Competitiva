#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int fatorial = n-1;
	while(fatorial > 0){
		n *= fatorial;
		fatorial--;
	}
	
	if (n == 0){
		cout << 1 << endl;
	}else{
		cout << n << endl;
	}
	return 0;
}
