#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, x, y, tests;
    cin >> tests;
    for(int i = 0; i < tests; i++){
        cin >> a >> b;
        int moves = 0;
        while(a!=b){
            int diff = max(a, b) - min(a, b);
            if(a<b && (diff % 2) != 0){
                a += diff;
            }else if(a < b && (diff % 2) == 0){
                a += (diff - 1);
            }else if(a > b && (diff % 2) != 0){
                a -= (diff + 1);
            }else{
                a -= diff;
            }
            moves++;
        }
        cout << moves << endl;
    }
    return 0;
}
