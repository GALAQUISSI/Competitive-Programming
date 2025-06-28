// beecrowd 1184

#include<bits/stdc++.h>

using namespace std;

int main(){
    double m[12][12];
    char t;
    double sum = 0.0;
    int count = 0;
    
    cin >> t;

        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                cin >> m[i][j];
            }
        }
        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                if(i > j){
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
