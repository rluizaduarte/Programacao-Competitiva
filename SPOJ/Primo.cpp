#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, ehPrimo = 1;
	cin >> n;
	
	if(n > 2){
		for(int i = n/2; i > 1; i--){
			if(n % i == 0){
				ehPrimo = 0;
				break;
			}
		}
	}

	if(ehPrimo){
		cout << "sim" << endl;
	}else{
		cout << "nao" << endl;
	}
	return 0;
}
