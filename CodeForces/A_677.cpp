//CodeForces 677A
//https://codeforces.com/contest/677/problem/A

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, h;
    cin >> n >> h;
    int a[n];
    int res = 0;
    int cont2  = 0, cont = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > h){
            cont2++;
        }else{
            cont++;
        }
    }
    res = (cont2 * 2) + cont;
    cout << res << "\n";
    return 0;
}
