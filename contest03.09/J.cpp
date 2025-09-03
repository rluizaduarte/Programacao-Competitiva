#include <bits/stdc++.h>
using namespace std;

int cartas[13] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
int resposta;

int main(){
    int maria = 0, joao = 0, rodadas;
    cin >> rodadas;
    
    int iniciais;
    for(int i = 0; i < 4; i++){
        cin >> iniciais;
        if(i < 2){
            if(iniciais > 10){
                joao += 10;
            }else{
                joao += iniciais;
            }
        }else{
            if(iniciais > 10){
                maria += 10;
            }else{
                maria += iniciais;
            }
        }
        cartas[iniciais - 1]--;
    }
    
    int comuns;
    for(int i = 0; i < rodadas; i++){
        cin >> comuns;
        if(comuns > 10){
            maria += 10;
            joao += 10;
        }else{
            maria += comuns;
            joao += comuns;
        }
        cartas[comuns - 1]--;
    }
    
    if(rodadas == 8 && maria != 23){
        resposta = -1;
    }else if (maria > 23){
        resposta = -1;
    }else if(joao == 23){
        resposta = -1;
    }else if(joao > 23){
        resposta = 1;
        while(cartas[resposta - 1] == 0){
            resposta++;
        }
        if(maria + resposta > 23){
            resposta = -1;
        }
    }else{
        int faltaJoaoEstourar = 24 - joao;
        int faltaMariaGanhar = 23 - maria;
        resposta = min(faltaMariaGanhar, faltaJoaoEstourar);
        if(cartas[resposta - 1] == 0){
            while(cartas[resposta - 1] == 0 || (maria + resposta < 23 && joao + resposta < 24)){
                resposta++;
            }   
        }
    }
    
    cout << resposta << endl;
    return 0;
}
