#include <stdio.h>
 
int main()
{
    //ingrese cuantos estudiantes hay, ingrese las notas y saque el promedio]
    int numEstudiantes, nota, suma;
    float promedio;
    printf("Ingrese el numero de estudiantes: ");
    scanf("%d",&numEstudiantes);
   while(numEstudiantes <= 0){
       printf("el valor debe ser positivo\n");
       printf("Ingrese el numero de estudiantes: ");
        scanf("%d",&numEstudiantes);
   }
   for(int i = 0; i < numEstudiantes;i++){
       printf("Estudiante %d\n",(i + 1));
       do{
           printf("Ingrese la nota, debe estar entre 1 y 10: ");
           scanf("%d",&nota);
           if(nota > 10 || nota < 1){
               printf("La nota no es valida, intente nuevamente\n");
           }
       }while(nota > 10 || nota < 1);   
   }
  // printf("Tenemos %d estudiantes\n",numEstudiantes);
   wsdwsw
    return 0;
}