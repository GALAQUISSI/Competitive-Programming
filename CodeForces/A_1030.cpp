//CodeForces 1030A
//https://codeforces.com/contest/1030/problem/A

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    vector<int>x(n);
    int y = 0;
    for(int i = 0; i < n; i++){
        cin >> x[i];
        if(x[i] == 1){
          y++;
        }
    }
    if(y != 0){cout << "HARD\n";}else{cout<<"EASY\n";}
return 0;
}
