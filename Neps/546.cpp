#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n_alunos;
    int sorteado;
    vector<string> lista;
    cin >> n_alunos >> sorteado;
    for(int i = 0; i < n_alunos; i++){
        string nome;
        cin >> nome;
        lista.push_back(nome);
    }

    sort(lista.begin(), lista.end());

    cout << lista[sorteado-1];

    return 0;
}