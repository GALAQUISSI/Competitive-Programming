#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, f1, f2, f3;

    cin >> m >> f1 >> f2;
    
     f3 = m - (f1 + f2);
     if(f3 > f1 && f3 > f2){
        cout << f3;
     }
     if(f1 > f3 && f1 > f2){
        cout << f1;
     }
     if(f2 > f3 && f2 > f1){
        cout << f2;
     }
     cout << "\n";
    return 0;
}