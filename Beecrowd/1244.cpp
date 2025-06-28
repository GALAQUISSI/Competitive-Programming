//beecrowd 1244

#include<bits/stdc++.h>

using namespace std;

struct pal {
    int tam;
    int id;
    string s;
};

bool func(pal a, pal b) {
    if(a.tam != b.tam) return a.tam > b.tam;
    return a.id < b.id; 
}

int main() {
    int casos;
    cin >> casos;
    getchar();
    while(casos--) {
        string s;
        getline(cin, s);
        s += " "; 

        vector<pal> ab;
        int a = 0;  

        while(s.find(" ") < s.size()) {
            pal j;
            j.s = s.substr(0, s.find(" "));
            j.tam = j.s.size();
            j.id = a;
            a++;  
            ab.push_back(j);  
            s.erase(0, s.find(" ") + 1); 
        }

        sort(ab.begin(), ab.end(), func);

        for(int i = 0; i < ab.size(); i++) {
            if(i != ab.size() - 1) {
                cout << ab[i].s << " ";
            } else {
                cout << ab[i].s;  
            }
        }
        cout << endl; 
    }
    return 0;
}
