//ver interseção entre intervalos
#include<bits/stdc++.h>

using namespace std;

int main(){
    int p, s;
    cin >> p >> s;
    vector<pair<int,int>> intervalo;

    for(int i = 0; i < s; i ++){
        int x, y;
        cin >> x >> y;
        intervalo.push_back({x,y});
    }


    if(s == 0){
        cout << "\n";
        return 0;
    }
    
    sort(intervalo.begin(), intervalo.end());

    vector<pair<int,int>> resp;
    resp.push_back(intervalo[0]);

    for(int i = 1; i < s; i++){
        if(intervalo[i].first <= resp.back().second){
            resp.back().second = max(resp.back().second, intervalo[i].second);
        }else{
            resp.push_back(intervalo[i]);
        }
    }

    for(auto &p : resp){
        cout << p.first << " " << p.second << "\n";
    }
    cout << "\n";
    return 0;
}