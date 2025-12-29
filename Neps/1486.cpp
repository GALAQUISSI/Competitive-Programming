#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> num;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x != 0){
        num.push_back(x);
        }else{
            if(!num.empty()){
            num.pop_back();
            }
        }
    }
    int tt = 0;
    for(int x : num){
        tt += x;
    }
    cout << tt;

    return 0;
}