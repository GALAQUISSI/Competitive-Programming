// beecrowd 1094

#include<stdio.h>

int main(){
    int n_casos;
    scanf("%d", &n_casos);
    
    int q;
    int qtotal = 0;
    int qr = 0, qs = 0, qc = 0;
    char t;
    double pc, pr, ps;

    for(int i = 0; i < n_casos; i++){
        scanf("%d %c", &q, &t);

        if(t == 'C' ){
            qc += q;
        }else if( t == 'R'){
            qr += q;
        }else if( t == 'S'){
            qs += q;
        }
         qtotal += q;
    
    }
    
    pc = (qc * 100.0)/qtotal;
    ps = (qs * 100.0)/qtotal;
    pr = (qr * 100.0)/qtotal;


    printf("Total: %d cobaias\n", qtotal);
    printf("Total de coelhos: %d\n", qc);
    printf("Total de ratos: %d\n", qr);
    printf("Total de sapos: %d\n", qs);
    printf("Percentual de coelhos: %.2f %%\n", pc);
    printf("Percentual de ratos: %.2f %%\n", pr);
    printf("Percentual de sapos: %.2f %%\n", ps);

return 0;
}
