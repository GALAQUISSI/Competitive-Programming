// beecrowd 1259

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int x;
    cin >> n;
    vector<int>par;
    vector<int>imp;
    
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x % 2 == 0){
            par.push_back(x);
        }else{
            imp.push_back(x);
        }
    }
    sort(par.begin(), par.end());
    sort(imp.begin(),imp.end(), greater<int>());

    for(int i = 0; i < par.size(); i++){
        cout << par[i] << "\n";
    }
    for(int i = 0; i < imp.size(); i++){
        cout << imp[i] << "\n";
    }
    return 0;
}
