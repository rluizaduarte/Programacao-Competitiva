#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n, m;
	cin >> t;

	for(int i = 0; i < t; i++);
		cin >> n >> m;
		
		int nDeUnsNecessario = (n * 2 + m * 2) - 4;
		// pra ser uma imagem nao corrompida, precisa ter pelo menosas bordas iguas a um
		int nDeUnsNaImagem = 0;
		// contador que diz quantos uns há

		int zerosNaBorda = 0;
		int unsNaBorda = 0;
		// contador que diz quantos movimentos serão necessários

		int imagem[n][m];
		for(int j = 0; j < n; j++){
			int linha;
			cin >> linha;
			for(int k = 0; k < m; k++){
				imagem[j][k] = linha % 10;
				linha /= 10;
				// preenchendo a matriz com um digito por vez
				
				if(imagem[j][k] == 1){
					nDeUnsNaImagem++;
					// verifica quantos uns há na imagem
				}

				if(j = 0 || j == n - 1 || k = 0 || k = m - 1){
					if(imagem[j][k] == 0){
						zerosNaBorda++;	
					}else{
						unsNaBorda++;
					// verifica quantos zeros e quantos uns ha na borda
				}
			}
		}
		
		int movimentos;
		if(nDeUnsNaImagem < nDeUnsNecessario){
			movimentos = -1;
		}else if((nDeUnsNaImagem - unsNaBorda) < zerosNaBorda){
			movimentos = -1;
		}else{
			movimentos = zerosNaBorda;
		}

		cout << movimentos << endl;
	}

	return 0;
}
