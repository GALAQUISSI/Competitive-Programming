// beecrowd 1164

#include<stdio.h>

int main(){
    int numero_casos;
    scanf("%d", &numero_casos);
    for(int i = 0; i < numero_casos; i++){
        int x;
        scanf("%d", &x);
        
        int soma = 0;

        for(int j = 1; j <= x/2; j++){ 
            if(x %j == 0){
            soma += j;
            }
        }
        if (soma == x){
            printf("%d eh perfeito\n", x);
        }else{
            printf("%d nao eh perfeito\n", x);
        }
    }
    return 0;
}
