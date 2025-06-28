//CodeForces 344A
//https://codeforces.com/contest/344/problem/A

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int x;
    cin >> x;
    vector<int>v(x);
    int gr = 0;
    for(int i = 0; i < x; i++){
        cin >> v[i];
    }
    for(int i =0; i < v.size(); i++){
         if(v[i] != v[i + 1]){
           gr++;
         } 
    }
    cout << gr << "\n";
    return 0;
}
