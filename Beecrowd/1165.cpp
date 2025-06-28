// beecrowd 1165

#include<stdio.h>

int main(){
    int numero_casos;
    scanf("%d", &numero_casos);
    for(int i = 0; i < numero_casos; i++){
        int x;
        scanf("%d", &x);
        
        int soma = 0;

        for(int j = 1; j <= x; j++){ 
            if(x %j == 0){
            soma ++;
            }
        }
        if (soma == 2){
            printf("%d eh primo\n", x);
        }else{
            printf("%d nao eh primo\n", x);
        }
    }
    return 0;
}
