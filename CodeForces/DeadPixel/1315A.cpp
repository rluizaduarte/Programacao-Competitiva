#include <bits/stdc++.h>
using namespace std;

int min(int a,  int b){
    if(a < b){
        return a;
    }else{
        return b;
    }
}

int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int main(){
    int t, a, b, x, y;
    cin >> t;
    for(int i = 0; i < t; i ++){
        cin >> a >> b >> x >> y;
        // a = columns; b = rows; x = deadColumn; y = deadRow

        int deadRow = min(y, (b - y - 1)) + 1;
        int notDeadRow = b - deadRow;
        int notDeadAreaRow = notDeadRow * a;
        // removing all dead rows

        int deadColumn = min(x, (a - x - 1)) + 1;
        int notDeadColumn = a - deadColumn;
        int notDeadAreaColumn = notDeadColumn * b;
        // removing all dead columns
        
        int notDeadArea = max(notDeadAreaRow, notDeadAreaColumn);

        cout << notDeadArea << endl;
    }
    return 0;
}