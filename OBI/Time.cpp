#include<bits/stdc++.h>

using namespace std;

int main(){
    int num, tim;
    cin >> num >> tim;

    vector<pair<string, int>> jog;

    for(int i = 0; i < num; i++){
        string nome;
        int hab;
        cin >> nome >> hab;
        jog.push_back({nome,hab});
    }

    vector<vector<string>> t(tim);

    sort(jog.begin(), jog.end(), [](auto &a, auto &b){
    return a.second > b.second;
});
    
    for(int i = 0; i < num; i++){
        t[i % tim].push_back(jog[i].first); 
    }
    for(int i = 0; i < tim; i++){
        cout << "Time " << i+1 << "\n";
        for(int j = 0; j < t[i].size(); j++){
            cout << t[i][j] << "\n";
        }
        cout << "\n";
    }

    return 0;
}
