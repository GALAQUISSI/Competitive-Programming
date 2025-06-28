//CodeForces 734A
//https://codeforces.com/contest/734/problem/A


#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    cin.ignore();
    int an = 0, dn = 0;
    for(int i = 0; i < n; i++){
        string s;
        getline(cin, s);
        if(s[i] == 'A'){
            an++;
        }
        if(s[i] == 'D'){
            dn++;
        }
    }
    if(an > dn){
        cout << "Anton\n";
    }
    if(dn > an){
        cout << "Danik\n";
    }
    if(dn == an){
        cout << "Friendship\n";
    }
    return 0;
}
