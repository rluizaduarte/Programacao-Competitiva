#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, value, sorted = 0;
    int cont = 1;
    cin >> n;
    while(n != 0){
        for(int i = 0; i < n; i++){
            cin >> value;
            if(value == (i + 1)){
                sorted = value;
            }
        }
        cout << "Teste " << cont << endl;
        cout << sorted << endl;
        cin >> n;
        cont++;
        sorted = 0;
    }
    return 0;
}