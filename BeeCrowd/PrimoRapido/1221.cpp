#include <bits/stdc++.h>
using namespace std;

bool ehPrimo(int x){
    for(int i = 2; i*i <= x; i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    
    while(n--){
        int x;
        cin >> x;
        
        if(ehPrimo(x)){
            cout << "Prime" << endl;
        }else{
            cout << "Not Prime" << endl;
        }
    }
    
    return 0;
}