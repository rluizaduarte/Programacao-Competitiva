#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int vetor[n];
    for(int i = 0; i < n; i++){
        cin >> vetor[i]; 
    }
    
    cout << n - 1 << endl;
    
    int min;
    for(int i = 0; i < n - 1; i++){
        min = i;
        for(int j = i + 1; j < n; j++){
            if(vetor[j] < vetor[min]){
                min = j;
            }
        }
        cout << i << " " << min << endl;
        
        int aux = vetor[i];
        vetor[i] = vetor[min];
        vetor[min] = aux;
    }
    
    return 0;
}