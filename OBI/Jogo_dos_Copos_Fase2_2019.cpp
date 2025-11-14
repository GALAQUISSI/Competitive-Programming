#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    char m;
    cin >> m;
    int move[n];
    
    for(int i = 0; i < n; i ++){
        cin >> move[i];
        if(move[i] == 1){
            if(m == 'A'){
                m = 'B';
            }else if(m == 'B'){m = 'A';}
        }
        if(move[i] == 2){
            if(m == 'B'){
                m = 'C';
            }else if(m == 'C'){m = 'B';}
        }
        if(move[i] == 3){
            if(m == 'C'){
                m = 'A';
            }else if(m == 'A'){m = 'C';}
        }
    }

    cout << m << "\n";

    return 0;
}