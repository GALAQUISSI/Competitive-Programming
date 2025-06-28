//beecrowd 1548

#include<bits/stdc++.h>

using namespace std;

int main(){
    int m;
    cin >> m;
    while(m--){
        int alunos;
        cin >> alunos;
        vector<int>notas(alunos);
        vector<int>n_ori(alunos);
        for(int i = 0; i < alunos; i++){
            cin >> notas[i];
            n_ori[i] = notas[i];
        }
        sort(notas.begin(), notas.end(), greater<int>());

        int cont= 0;
        for(int i = 0; i < alunos; i++){
            if(notas[i] == n_ori[i]){
                cont++;
            }
        }
        cout << cont << endl;
    }
    return 0;
}
