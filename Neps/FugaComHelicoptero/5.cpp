#include <bits/stdc++.h>
using namespace std;

int main(){
    int H, P, F, D;
    cin >> H >> P >> F >> D;
    
    int correctD;
    if(H < P && H < F){
        if(F < P){
            correctD = -1;
        }else{
            correctD = 1;
        }
    }else if(F < H && F < P){
        if(P < H){
            correctD = -1;
        }else{
            correctD = 1;
        }
    }else{
        if(H < F){
            correctD = -1;
        }else{
            correctD = 1;
        }
    }
    
    if(D == correctD){
        cout << 'S' << endl;
    }else{
        cout << 'N' << endl;
    }
    
    return 0;
}
