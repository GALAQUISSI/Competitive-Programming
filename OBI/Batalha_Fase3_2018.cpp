#include<bits/stdc++.h>

using namespace std;

int main(){
    bool j1 = false;
    bool j2 = false;

    int a1, d1, a2, d2;

    cin >> a1 >> d1;
    cin >> a2 >> d2;

    if(d1 == a2){
        j1 = true;
    }
    if(d2 == a1){
        j2 = true;
    }

    if(j1 == j2)cout << "-1\n";
    if(j1 && j1 != j2)cout << "1\n";
    if(j2 && j2 != j1)cout << "2\n";

   return 0;
}