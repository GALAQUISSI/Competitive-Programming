// beecrowd 1180

#include<bits/stdc++.h>

using namespace std;

int main(){
   int x;
   cin >> x;
   int v[x];

   for(int i = 0; i < x; i++){
    cin >> v[i];
   }
   int mn = v[0];
   int pos = 0;
   for(int i = 0; i < x; i++){
   
    if(v[i] < mn){
        mn = v[i];
        pos = i;
    }
   }
    printf("Menor valor: %d\nPosicao: %d\n", mn, pos);
   
        return 0;
}
