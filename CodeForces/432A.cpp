//Codeforces 432A
//https://codeforces.com/problemset/problem/432/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int>p;
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        p.push_back(x);
    }
    int gr = 0;
    for(int i = 0; i < p.size(); i++){
        if(p[i] + k <= 5){
            gr++;
        }
    }
    cout << gr/3 << "\n";
    return 0;
}
