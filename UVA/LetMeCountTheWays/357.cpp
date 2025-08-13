#include <bits/stdc++.h>
#define MAX 100000
using namespace std;

typedef long long ll;
ll ways[MAX];
int coins[] = {1, 5, 10, 25, 50};

void coinChange(){
    ways[0] = 1;    
    for (auto c : coins){
        for (int i = c; i <= MAX; i++){
            ways[i] += ways[i-c];
        }
    }
}

int main(){
    coinChange();
    int n;
    while(cin >> n){
        if(n < 5){
            cout << "There is only 1 way to produce " << n << " cents change." << endl;
        }else{
            cout << "There are " << ways[n] << " ways to produce " << n << " cents change." << endl;
        }
    }
}
