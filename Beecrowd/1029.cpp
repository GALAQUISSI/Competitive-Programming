// beecrowd 1029

#include<bits/stdc++.h>

using namespace std;

int calls;

long long int fibona(int j){
    if(j <= 1) return j;
    return fibona(j - 1) + fibona(j - 2);
}
long long int fib(int x){
    calls++;

    if(x <= 1) {return x;}
    else{
        return fib(x - 1) + fib(x - 2);
    }
}
int main(){
    int n;
    cin >> n;
    int v[n];
    for(int i= 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        calls = -1;
        long long int res = fibona(v[i]);
        fib(v[i]);
        cout << "fib(" << v[i] << ") = " << calls << " calls = " << res << endl;
    }

    return 0;
}
