#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    while(n != 0){
        long long resp[n];        
        for(int i = 0; i < n; i++){
            cin >> resp[i];
        }
        
        long long soma = 0;
        long long vet[n-1];
        for(int i = 0; i < n; i++){
            if(i==0){
                vet[i] = resp[0] + resp[1];
            }else{
                vet[i] = vet[i - 1] + resp[i + 1];
            }
            soma += vet[i];
        }
        
        for(int i= 0; i < n; i++){
            cout << resp[i];
        }
        cout << endl;
        
        
        for(int i= 0; i < n-1; i++){
            cout << vet[i];
        }
        cout << endl;
        
        cout << soma << endl;
        cin >> n;
    }
    return 0;
}
