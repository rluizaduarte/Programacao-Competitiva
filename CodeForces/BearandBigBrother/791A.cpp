#include <bits/stdc++.h>
using namespace std;

int main(){
    int limak, bob;
    cin >> limak >> bob;
    
    int anos = 0;
    while(limak <= bob){
        limak *= 3;
        bob *= 2;
        anos++;
    }
    
    cout << anos << endl;
    return 0;
}
