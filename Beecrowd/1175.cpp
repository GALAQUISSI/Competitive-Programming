// beecrowd 1175

#include<bits/stdc++.h>

using namespace std;

int main(){
    int v[20];

    for(int i = 0; i < 20; i++){
        cin >> v[i];
    }
    for(int i = 0; i < 10; i++){
        int aux = v[i];
        v[i] = v[19 - i];
        v[19 - i] = aux;
    }

    for(int i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, v[i]);
        
    }

    return 0;
}
