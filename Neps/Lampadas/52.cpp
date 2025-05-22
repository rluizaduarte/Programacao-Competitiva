#include <bits/stdc++.h>
using namespace std;

int main(){
	int A = 0, Acontra = 1, B = 0, Bcontra = 1, n, I;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> I;
		if(I == 1){
			int aux = A;
			A = Acontra;
			Acontra = aux;
		}else{
			int auxA = A, auxB = B;
			A = Acontra;
			Acontra = auxA;
			B = Bcontra;
			Bcontra = auxB;
		}
	}
	
	cout << A << endl;
	cout << B << endl;

	return 0;
}
