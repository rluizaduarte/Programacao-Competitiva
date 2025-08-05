#include <bits/stdc++.h>
using namespace std;

long long fib[52];
long long fibonacci(int n){
    if(fib[n] != -1){
        return fib[n];
    }
    if(n <= 1){
        return fib[n] = 1;
    }else{
        fib[n] = fibonacci(n - 1) + fibonacci(n - 2);
        return fib[n];
    }
}

int main()
{
    memset(fib, -1, sizeof(fib));
    int t;
    cin >> t;
    
    for(int i = 1; i <= t; i++){
        int n;
        cin >> n;
        
        cout << "Scenario #" << i << ":" << endl;
        cout << fibonacci(n + 1) << endl << endl;
    }
    
    return 0;
}
