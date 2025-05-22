#include <bits/stdc++.h>
using namespace std;

int main(){
	unsigned long int L, N;
	cin >> L >> N;

	unsigned long int tapetes1Por1;
	tapetes1Por1 = N - 1;
	// um unico tapete terá lado maior que 1
	// o resto terá lado 1
	
	unsigned long int tapeteMaior;
	tapeteMaior = L - tapetes1Por1;
	// o lado do tapete maior será o resto do tubo
	
	unsigned long int area;
	area = tapetes1Por1 + (tapeteMaior * tapeteMaior);
	// calculando a área total
	
	cout << area << endl;
	return 0;
}
