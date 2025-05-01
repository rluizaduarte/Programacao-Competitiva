#include <bits/stdc++.h>
using namespace std;

bool verificaSequencia(int posicao, string palavra, string texto) {
    for(int i = 1; i< palavra.size(); i++){
        if(posicao + i>= texto.size()){
            return false;
        }
        if(palavra[i] != texto[posicao + i]){
            return false;
        }
    }
    return true;
}

int main(){
    int testes;
    cin >> testes;
    
    for(int i = 0; i < testes;i++){
        string proibido, bracelete;
        cin >> proibido >> bracelete;
        
        bool encontrou = false;
        string braceleteDuplicado = bracelete + bracelete;
        string braceleteInvertido = "";
        for(int j = braceleteDuplicado.size(); j >= 0; j--){
                char braceleteChar = braceleteDuplicado[j];
                braceleteInvertido+= braceleteChar;
        }

        for(int j = 0; j < braceleteDuplicado.size() && !encontrou; j++){
            if(proibido[0] == braceleteDuplicado[j]){
                encontrou = verificaSequencia(j, proibido, braceleteDuplicado);
            }
        }
        
        for(int j = 0; j < braceleteInvertido.size() && !encontrou; j++){
            if(proibido[0] == braceleteInvertido[j]){
                encontrou = verificaSequencia(j, proibido, braceleteInvertido);
            }
        }
        
        if(encontrou){
            cout << 'S' << endl;
        }else{
            cout << 'N' << endl;
        }
    }
    
    return 0;
}