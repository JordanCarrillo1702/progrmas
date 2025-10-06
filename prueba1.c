#include <stdio.h>

int main (){
    int ID ;
    char nombre [50];
    int cantidadstock;
    float preciounitario;
    int cantidadventa=0;
    int agregarstock=0;
    float ganancias=0;
    int sumaventa=0;
    int controlador;
    int controladorfin;
    
   do
   {
    printf("Ingrese si 1 es vendedor, Ingrese 2 si es comprador:  ");
    scanf("%d",&controlador);

    if(controlador ==1){
        printf("El ID es: ");
        scanf("%d",&ID);
        printf("El nombre del producto es: ");
        scanf("%s", nombre);
        printf("%s\n",nombre);
        printf("Ingrese la cantidad en stock ");
        scanf("%d",&cantidadstock);
        printf("Ingrese precio unitario ");
        scanf("%f",&preciounitario);
    }
    if(controlador ==2){
        printf("Ingrese cantidad que desea ");
        scanf("%d",&cantidadventa);
        while(cantidadstock<cantidadventa){
            printf("La cantidad que agrego supera cantidad de stock. Vuelva a ingresar");
            scanf("%d",&cantidadventa);
        }
       cantidadstock=cantidadstock-cantidadventa;
       sumaventa=cantidadventa+sumaventa; 
       printf("la cantidad en stock es %d , y la cantidad vendida %d\n",cantidadstock,sumaventa);
    }
    printf("Ingrese 1 si quiere continuar caso contrario cualquier numero ");
    scanf("%d",&controladorfin);
   } while (controladorfin==1);
   printf("La suma de venta %d\n",sumaventa);
   ganancias=(sumaventa)*(preciounitario);
   printf("Las ganancias son: %.2f",ganancias);
   
   
}