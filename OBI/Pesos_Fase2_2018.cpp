#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int pesos[n]; 

    for(int i = 0; i < n; i++){
        cin >> pesos[i];
    }
   bool resposta = false;
   int em_baixo = pesos[0];
   int em_cima = 0;

   for(int i = 0; i < n; i++){
    if(abs(em_baixo - em_cima) <= 8){
        em_cima = pesos[i];
        em_baixo = pesos[i+1];
        resposta = true;
    }else{
        resposta = false;
        break;
    }
   }
   if(resposta){
    cout << "S\n";
   }else{
    cout << "N\n";
   }
   return 0;
}