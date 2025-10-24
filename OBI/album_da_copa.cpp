#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, a;
    cin >> x;
    set<int> lista;
    for(int i = 0; i < x; i++){
        cin >> a;
        lista.insert(a);
    }
    int tam;
    tam = lista.size();
    cout << x - tam;
   // for(int num : lista){
     //   cout << num;
    //}
    return 0;
}