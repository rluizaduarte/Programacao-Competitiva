#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int plant[n][n], carrots;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> plant[i][j];
        }
    }

    int totalCarrots = 0, q, iBegin, iEnd, jBegin, jEnd;
    cin >> q;
    for(int k = 0; k < q; k++){
        cin >> iBegin  >> jBegin >> iEnd >> jEnd;
        for(int i = iBegin - 1; i < iEnd; i++){
            for(int j = jBegin - 1; j < jEnd; j++){
                totalCarrots += plant[i][j];
		plant[i][j] = 0;
            }
        }
    }

    cout << totalCarrots << endl;

    return 0;
}
