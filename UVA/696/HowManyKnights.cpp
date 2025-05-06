#include <bits/stdc++.h>
using namespace std;

void contaCavaleiros(int m, int n){
    int maior = max(m, n);
    int nCavaleiros;
    if(m == 1 || n == 1){
        nCavaleiros = maior;
    }else if(m == 2 || n == 2){
        if(maior % 4 == 0){
            nCavaleiros = maior;
        }else if(maior % 2 == 0){
            nCavaleiros = maior + 2;
        }else{
            nCavaleiros = maior + 1;
        }
    }else{
        nCavaleiros = ((m * n) + 1) / 2;
    }
    cout << nCavaleiros << " knights may be placed on a " << m << " row " << n << " column board." << endl;
}

int main(){
    int m, n;
    while(cin >> m >> n){
        if(m == 0 && n == 0){
            break;
        }else if (m == 0 || n == 0){
            cout << "0 knights may be placed on a " << m << " row " << n << " column board." << endl;
        }else{
            contaCavaleiros(m, n);
        }
    }
    return 0;
}