#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    
    long long int baloes[n];
    for(int i = 0; i < n; i++){
        cin >> baloes[i];
    }
    
    long long int h, flechas = 0;
    for(int i = 0; i < n; i++){
        if(baloes[i] != 0){
            h = baloes[i] - 1;
            baloes[i] = 0;
            flechas++;
            for(int j = i + 1; j < n; j++){
                if(baloes[j] == h){
                    baloes[j] = 0;
                    h--;
                }
            }
        }
    }
    
    cout << flechas << endl;
    
    return 0;
}