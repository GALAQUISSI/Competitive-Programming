// beecrowd 1173

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int v[10];
    v[0] = n;

    for(int i = 1; i < 10; i++){
        v[i] = v[i - 1] * 2;
    }
    for(int i = 0; i < 10; i++){
         printf("N[%d] = %d\n", i, v[i]);
    }
    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int v[10];
    v[0] = n;

    for(int i = 1; i < 10; i++){
        v[i] = v[i - 1] * 2;
    }
    for(int i = 0; i < 10; i++){
         printf("N[%d] = %d\n", i, v[i]);
    }
    return 0;
}
