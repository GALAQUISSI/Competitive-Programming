// beecrowd 2479

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();
    vector<string>nomes;
    int cp = 0, ncp = 0;
    for(int i = 0; i < n; i++){
        string s;
        getline(cin, s);
        if(s[0] == '+'){
            cp++;
            nomes.push_back(s.substr(2));
        }
        if(s[0] == '-'){
            ncp++;
            nomes.push_back(s.substr(2));
        }
    }
    sort(nomes.begin(), nomes.end());
    for(int i = 0; i < nomes.size(); i++){
        cout << nomes[i] << "\n";
    }
    cout << "Se comportaram: " << cp <<" | Nao se comportaram: " << ncp << "\n";
    return 0;
}
