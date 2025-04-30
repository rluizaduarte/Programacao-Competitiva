#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    bool possivel = false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            possivel = true;
            break;
        }
    }

    if(possivel){
        cout << 'S' << endl;
    }else{
        cout << 'N' << endl;
    }

    return 0;
}
