//beecrowd 1178

#include<bits/stdc++.h>

using namespace std;

int main(){
   double N[100]; 
    cin >> N[0]; 


    for (int i = 1; i < 100; i++) {
        N[i] = N[i - 1] / 2.0; 
    }

    for (int i = 0; i < 100; i++) {
        cout << fixed << setprecision(4);
        cout << "N[" << i << "] = " << N[i] << endl;
    }
   return 0;
}
