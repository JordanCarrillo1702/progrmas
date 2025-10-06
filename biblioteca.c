#include <stdio.h>

int main(){

    int isbn=01;
    char titulo='a';
    char autor='b';
    int nEjem=30;
    int nPres=0;
    int cantPres;
    int cantidadD;
    printf("ingrese la cantidad a prestar");
    scanf("%d",&cantPres);

    while (cantPres>nEjem){
        printf("supero la cantida en stok ingrese de nuevo ");
        scanf("%d",&cantPres);
    }

    nEjem=nEjem-cantPres;

    printf("ingres cuantos quiere dfevolver");
    scanf("%d",&cantidadD);

    nEjem=cantidadD+nEjem;

    printf("el titulo es %c  el autor es %C  la cantidad en stock es %d", titulo,autor,nEjem);

}