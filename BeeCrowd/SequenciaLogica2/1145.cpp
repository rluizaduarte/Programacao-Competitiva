#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    
    int cont = 1;
    for(int i = 1; i <= y; i++){
        cout << i;
        if(cont < x){
            cout << " ";
        }else{
            cout << endl;
            cont = 0;
        }
        cont++;
    }
    
    return 0;
}