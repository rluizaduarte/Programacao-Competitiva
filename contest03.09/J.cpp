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
    
    int JoaoEstourar = 24 - joao;
    int MariaGanhar = 23 - maria;
    int mn = min(JoaoEstourar, MariaGanhar);
    
    if(mn > 10){
        resposta = -1;
    }else if(cartas[mn - 1] > 0) {
        resposta = mn;
    }else{
        while(cartas[mn - 1] == 0){
            mn++;
        }
        if((maria + mn) > 23){
            resposta = -1;
        }else if((joao + mn) == 23){
            resposta = -1;
        }else{
            resposta = mn;
        }
    }
    
    cout << resposta << endl;
    return 0;
}
