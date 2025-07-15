#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n, m;
	cin >> t;

	for(int i = 0; i < t; i++){
		cin >> n >> m;
		
		char imagem[n][m];
		for(int j = 0; j < n; j++){
			char linha;
			for(int k = 0; k < m; k++){
				cin >> linha;
				imagem[j][k] = linha
			}
		}

		int unsDentro = 0;
		int zerosNaBorda = 0; 
		
		for(int j = 0; j < n; j++){
			for(int k = 0; k < m; k++){
				if(j == 0 || j == (n - 1) || k == 0 || k == (m - 1)){
					if(imagem[j][k] == 0){
						zerosNaBorda++;	
					}
				else{
					if(imagem[j][k] == 1){
						unsDentro++;
					}
				}
		}
		
		if(unsDentro >= zerosNaBorda){
			cout << zerosNaBorda << endl;
		}else{
			cout << -1 << endl;
		}
	}

	return 0;
}
