#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> t(n);
    for(int i = 0; i < n; i++){
        cin >> t[i];
    }
    int total = 0;
    int start = t[0];
    int end = t[0]+ 10;

    for(int i = 1; i < n; i++){
        if(t[i] < end){
            end = t[i] + 10;
        }else{
            total += end - start;
            start = t[i];
            end = t[i]+10;
        }
    }
    total += end - start;

    cout << total << "\n";
    return 0;
}