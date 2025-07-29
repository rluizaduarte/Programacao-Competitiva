#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    int campo[n][m];
    int maior = 0;
    int linhaMaior, colunaMaior;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> campo[i][j];
        }
    }

    int maiorLinha = 0;
    for(int i = 0; i < n; i++){
        int soma = 0;
        for(int j = 0; j < m; j++){
            soma += campo[i][j];
        }
        maiorLinha = max(maiorLinha, soma);
    }

    int maiorColuna = 0;
    for(int j = 0; j < m; j++){
        int soma = 0;
        for(int i = 0; i < n; i++){
            soma += campo[i][j];
        }
        maiorColuna = max(maiorColuna, soma);
    }

    cout << max(maiorLinha, maiorColuna) << endl;
    return 0;
}