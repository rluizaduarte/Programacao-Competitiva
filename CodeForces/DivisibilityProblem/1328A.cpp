#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, t;
    
    cin >> t;
    while(t--){
        cin >> a >> b;
        
        int moves = 0;
        while(a % b != 0){
            a++;
            moves++;
        }
        
        cout << moves << endl;
    }
    
    return 0;
}
