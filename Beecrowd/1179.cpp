//beecrowd 1179

#include<bits/stdc++.h>

using namespace std;

int main(){
    int v[15], par[5], imp[5];
        int cp = 0, ci = 0; 

    for(int i = 0; i < 15; i++){
        cin >> v[i];
    }
    for(int i = 0; i < 15; i++){
        if(v[i] % 2 == 0){
            par[cp] = v[i];
            cp ++;
            if(cp == 5){
                for(int j = 0; j < 5; j++){
                    printf("par[%d] = %d\n", j, par[j]);
                }
                cp = 0;
            }
        }else{
            imp[ci] = v[i];
            ci ++;
            if(ci == 5){
                for(int j = 0; j < 5; j++){
                    printf("impar[%d] = %d\n", j, imp[j]);
                }
                ci = 0;
            }
        }
    }
    for(int i = 0; i < ci; i++){
        printf("impar[%d] = %d\n", i, imp[i]);
    }
    for(int i = 0; i < cp; i++){
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}
