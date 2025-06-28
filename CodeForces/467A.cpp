//CodeForces 467A
//https://codeforces.com/contest/467/problem/A

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int x;
    cin >> x;
    int p, q;
    int r = 0;
    for(int i = 0; i< x; i++){
        cin >> p >> q;
        if((p+2) <= q){r++;}
    }
    cout << r << "\n";
    return 0;
}
