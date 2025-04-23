#include <bits/stdc++.h>
using namespace std;
 
int main(){
    double distancia, distanciaTotal, luke, v1, v2, vTotal, tempo;
    cin >> luke >> distancia >> v1 >> v2;
 
    // sabendo que luke ocupa um espaço que não deverá ser contado na distancia total:
    distanciaTotal = distancia - luke;
    // a velocidade relativa de aproximação é a nossa velocidade total
    vTotal = v1 + v2;
    // da fórmula da velocidade média, temos:
    tempo = distanciaTotal / vTotal;
 
    cout << setprecision(20) << fixed << tempo << endl;
    return 0;
}