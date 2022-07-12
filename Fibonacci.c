#include <stdio.h>

int calculaParesCoelhos(int mesesNaFunc);
int main(){
    int meses, quantidadeDePares;

    printf("\n Digite quantos meses se passaram desde o inicio da criacao de coelhos: ");
    scanf("%d", &meses);

    quantidadeDePares = calculaParesCoelhos(meses);

    printf("no mes %d existe %d par(es) de coelho(s)", meses, quantidadeDePares);

}

int calculaParesCoelhos(int mesesNaFunc){
if(mesesNaFunc == 1 || mesesNaFunc == 2){
    return 1;
}else{
    return calculaParesCoelhos(mesesNaFunc-1)+ calculaParesCoelhos(mesesNaFunc-2);
}
}



