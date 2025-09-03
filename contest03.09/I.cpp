#include <bits/stdc++.h>
using namespace std;

int main(){
    int vetor[8];
    char resposta = 'S';
    for(int i = 0; i < 8; i++){
        cin >> vetor[i];
        if(vetor[i] == 9){
            resposta = 'F';
        }
    }
    
    cout << resposta << endl;
    return 0;
}