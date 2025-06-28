// beecrowd 1566

#include<bits/stdc++.h>

using namespace std;

int main(){
    int casos;
    cin >> casos;

    while(casos--){
        long long int pessoas;
        cin >> pessoas;
        vector<long long int> altura(pessoas);
        for(int i = 0; i < pessoas; i++){
            cin >> altura[i];
        }
        sort(altura.begin(), altura.end());

        for(int i = 0; i < pessoas; i++){
            if(i == (pessoas - 1) ){
                cout << altura[i] << endl;
            }else{
            cout << altura[i] << " ";
            }
        }
    }
    return 0;
}
