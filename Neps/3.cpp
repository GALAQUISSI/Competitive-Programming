#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    if(a <= 800){
        cout << 1;
    }
    else if(a > 800 && a <= 1400){
        cout << 2;
    }else{
        cout << 3;
    }
    return 0;
}