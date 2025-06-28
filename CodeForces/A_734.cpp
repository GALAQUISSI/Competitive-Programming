//CodeForces 734A
//https://codeforces.com/contest/734/problem/A

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    cin.ignore();
    int an = 0, dn = 0;
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
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
    
