#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> id(n);
    for(int i = 0; i < n; i++){
        cin >> id[i];
    }
    int s;
    cin >> s;
    
    unordered_set<int> saiu(s);
    for(int i = 0; i < s; i++){
        int x;
        cin >> x;
        saiu.insert(x);
    }
    string res;
    res.reserve(n * 6);
    for(int i = 0; i < n; i++){
        if(saiu.find(id[i]) == saiu.end()){
            res += to_string(id[i]);
            res.push_back(' ');
        }
    }

    res.push_back('\n');
    cout << res;
    
    return 0;
}