#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int maior = n;
	while(n != 0){
		cin >> n;
		if(n > maior){
			maior = n;
		}
	}

	cout << maior << endl;
	return 0;
}
