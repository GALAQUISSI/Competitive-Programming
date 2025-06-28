// beecrowd 1181

#include<bits/stdc++.h>

using namespace std;

int main(){
        int n;
        double m[12][12];
        char t;
        double sum = 0;
            cin >> n;
            cin >> t;
            for(int i = 0; i < 12; i++){
                for( int j = 0; j < 12; j++){
                        cin >> m[i][j];
                }
            }
            for(int i = 0; i < 12; i++){
                for(int j = 0; j < 12; j++){
                    if(i == n){
                            sum += m[i][j];
                        }
                }
            }
            if(t == 'M'){
                printf("%.1lf\n", sum/12.0);
            }else{
                printf("%.1lf\n", sum);
            }
    return 0;
}
