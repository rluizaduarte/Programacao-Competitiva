#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, count = 0;
	cin >> n;
	char table[n];
	for(int i = 0; i < n; i++){
		cin >> table[i];
		if(i > 0 && table[i] == table[i - 1]){
			count ++;
		}
	}
	cout << count << endl;
	return 0;
}
