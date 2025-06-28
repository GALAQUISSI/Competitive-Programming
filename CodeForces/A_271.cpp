//CodeForces 271A
//https://codeforces.com/contest/271/problem/A

#include<bits/stdc++.h>
using namespace std;
 
bool ver(int ano){
    string y = to_string(ano);
    unordered_set<char>dig;
        for(int i = 0; i < y.size(); i++){
            char c = y[i];
            if(dig.count(c) > 0){
                return false;
            }
            dig.insert(c);
        }
        return true;
}
int next(int ano){
    ano++;
    while(!ver(ano)){
        ano++;
    }
    return ano;
}
 
int main(){
    int x;
    cin >> x;
    int res = next(x);
    cout << res << "\n";
    return 0;
}
