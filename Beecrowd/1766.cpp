//beecrowd 1766

#include<bits/stdc++.h>

using namespace std;
struct rena{
double peso, alt;
int id;
string s;

};

bool func(rena a, rena b){
if(a.peso != b.peso)return a.peso > b.peso;
if(a.id != b.id)return a.id < b.id;
if(a.alt != b.alt)return a.alt < b.alt;
return a.s < b.s;
}
int main(){
    int t;
    cin >> t;
    int teste = 1;
    while(t--){
   
        int n, e;
        cin >> n >> e;
        vector<rena> r;
        rena aux;
        for(int i = 0; i< n; i++){
            cin >> aux.s >> aux.peso >> aux.id >> aux.alt;
            r.push_back(aux);
        }
        sort(r.begin(), r.end(), func);
         cout << "CENARIO {" << teste++ << "}\n";
        for(int i = 0; i < e; i++){
            cout << i + 1 << " - " << r[i].s << endl;
        }

    }
}
