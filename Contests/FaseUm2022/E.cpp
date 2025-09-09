#include <bits/stdc++.h>
using namespace std;
 
#define TAM 1000001
 
int main(){
    int i, n, x, vet[TAM] {0}, flechas = 0;
    cin >> n;
 
    for(i = 0; i < n; i++){
        cin >> x;
        if(vet[x] > 0){
            vet[x]--;
        }else{
            flechas++;
        }
        vet[x-1]++;
    }
 
    cout << flechas << endl;
    
    return 0;
}
