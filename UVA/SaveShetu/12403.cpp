#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int operacoes;
    cin >> operacoes;
    
    int total = 0;
    while(operacoes--){
        string resposta;
        long long int doacao;
        
        cin >> resposta;
        if(resposta == "donate"){
            cin >> doacao;
            total += doacao;
        }else{
            cout << total << endl;
        }
    }
    return 0;
}
