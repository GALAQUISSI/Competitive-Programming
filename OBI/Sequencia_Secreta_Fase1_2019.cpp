#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int atual = v[0];
    int c = 0;
    for(int i = 0; i < n; i++){
        if(atual != v[i+1]){
            c++;
        }
        atual = v[i+1];
    }

    cout << c;

    return 0;
}
