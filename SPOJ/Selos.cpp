#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool possivel = false;
    for(int i = (n/2); i < n; i++){
        for(int j = 2; j < n; j++){
            if((i * j) == n){
                cout << 'S' << endl;
                possivel = true;
                break;
            }
        }
        if(possivel){
            break;
        }
    }
    if(!possivel){
        cout << 'N' << endl;
    }

    return 0;
}

