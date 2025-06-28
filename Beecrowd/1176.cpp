// beecrowd 1176

#include<bits/stdc++.h>

using namespace std;

long long int fibonacc(int x){
    if(x == 0) return 0;
    if(x == 1) return 1;

    long long int a = 0, b = 1, fib;
    for(int i = 2; i <= x; i++){
        fib = (a + b);
        a = b;
        b = fib;
    }
    return fib;
}
int main(){
    int n;
        cin >> n;
        int v[n];
        
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        cout << "Fib(" << v[i] << ") = " << fibonacc(v[i]) << endl;
    }
    return 0;
}
