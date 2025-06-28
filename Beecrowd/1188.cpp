// beecrowd 1188

#include<bits/stdc++.h>

using namespace std;

int main(){
    double m[12][12];
    char t;
    int count = 0;
    double sum = 0.0;

    cin >> t;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> m[i][j];
            if(i > j && (i + j) >= 12){
                sum += m[i][j];
                count++;
            }
        }
    }
    cout << fixed << setprecision(1);
    if(t == 'M'){
        cout << (sum/count) << endl;
    }else{
        cout << sum << endl;
    }

    return 0;
}
