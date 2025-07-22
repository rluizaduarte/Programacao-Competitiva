#include <bits/stdc++.h>
using namespace std;

int main(){
    int exp, nov;
    cin >> exp >> nov;

    int times = 0;
    while(exp && nov && exp + nov >= 3){
        if(exp <= nov){
            // config A
            exp--;
            nov-=2;
        }else{
            // config B
            nov--;
            exp-=2;
        }
        
        times++;
    }

    cout << times << endl;
    return 0;
}
