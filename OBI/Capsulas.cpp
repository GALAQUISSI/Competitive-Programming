/*
exercicio vc tem um numero de capsulas c e um numero de moedas m e cada capsula possue um ciclo
no qual a cada x dias gera uma moeda
nisso descubra a quantidade minima de dias para alcançar as moedas m ou passar 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int c, m;
    cin >> c >> m;
    vector<int> ci(c);
    for(int i = 0; i < c; i++){
        cin >> ci[i];
    }
    int dias = 0;
    int moedas = 0;
    /*
    enquanto moedas for menor que m, vai passando os dias
    */
    while(moedas < m){
        dias++;
        for(int i = 0; i < c; i++){
            if(dias % ci[i] == 0){
                moedas++;
            }
        }
    }
    cout << dias << "\n";
    return 0;
}