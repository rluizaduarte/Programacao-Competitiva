#include <bits/stdc++.h>
using namespace std;

// retorna true se tem exatamente um dig dif de zero seguido de zeros
bool ehEspecial(int n){
    int x = abs(n);
    // remove o ultimo dig até encontrar um dif de zero
    while(x % 10 == 0){
        x /= 10;
    }
    // se ele for especial, retornará true
    return(x >= 1 && x <= 9);
}

int main(){
    int t; 
    cin >> t;
    
    while(t--){
        int a, b;
        cin >> a >> b;

        if(ehEspecial(a) && ehEspecial(b)){
            // ambos sao especiais
            cout << a << " x " << b;
        }else if(ehEspecial(a)){
            // a é especial, b nao é
            cout << a << " x " << (b/10)*10 << " + " << a << " x " << b%10;
        }else if(ehEspecial(b)){
            // b é especial, a não é
            cout << (a/10)*10 << " x " << b << " + " << a%10 << " x " << b;
        }else{
            // nenhum é especial
            int restoA = a % 10;            // parte não especial (resto) de a
            int potA = a - restoA;          // parte especial de a (múltiplo de 10)
            int restoB = b % 10;            // parte não especial (resto) de b
            int potB = b - restoB;          // parte especial de b (múltiplo de 10)

            cout 
            << potA << " x " << potB << " + " 
            << restoA << " x " << potB << " + " 
            << potA << " x " << restoB << " + " 
            << restoA << " x " << restoB;
        }
        cout << endl;
    }

    return 0;
}