 #include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    vector<long long> front(n+1), back(n+1);
    for (int i = 1; i <= n; ++i) cin >> front[i];
    for (int i = 1; i <= n; ++i) cin >> back[i];

    vector<int> diff(n + 2, 0);

    for (int k = 0; k < t; ++k) {
        int L, R;
        cin >> L >> R;       
        diff[L] += 1;
        diff[R + 1] -= 1;    
    }

    string output;
    output.reserve(n * 6);

    int cur = 0;
    for (int i = 1; i <= n; ++i) {
        cur += diff[i];
        if (cur & 1) { 
            output += to_string(back[i]);
        } else {
            output += to_string(front[i]);
        }
        if (i < n) output.push_back(' ');
    }
    output.push_back('\n');

    cout << output;
    return 0;
}
