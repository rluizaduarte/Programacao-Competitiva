#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    string resposta;
    cin >> resposta;
    
    int total = 0;
    for(int i = 0; i < n; i++){
        if((resposta[i] == 'a' && resposta[i + 1] == 'a') || (resposta[i] == 'a' && resposta[i - 1] == 'a')){
            total++;
        }
    }
    
    cout << total << endl;
    return 0;
}