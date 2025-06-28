//CodeForces 110A
//https://codeforces.com/contest/110/problem/A

#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    long long int n;
 
    cin >> n;
    int cont = 0;
    while(n > 0){
        int digitos = n % 10;
        if(digitos == 4 || digitos == 7){
        cont++;
        }
        n /= 10;
    }
 
    if(cont == 4 || cont == 7){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
 
    return 0;
}
