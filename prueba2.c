#include <stdio.h>

int main (){
    int numFilas=5;
    int numColumnas=3;
    float calificaciones [numFilas][numColumnas];
    float promedioAsignatura=0;
    float promedioEstudiante=0;
    float Max=0;
    float Min=11;
    int estudiantesaprobados=0;
    int estudiantesreprobados=0;
    int i,j;
    float suma=0;
/// ingreso de datos a la matriz
    for (i = 0; i < numFilas; i++) {
    for (j = 0; j < numColumnas; j++) {
        int valid = 0; 
        while (valid==0) {
            printf("Ingrese la calificacion del estudiante %d en la asignatura %d: ", i+1, j+1);
            if (scanf("%f", &calificaciones[i][j]) != 1) {
                printf("Entrada invalida. Debe ingresar un numero.\n");
                while(getchar() != '\n'); 
            } else if (calificaciones[i][j] < 0) {
                printf("La cantidad debe ser mayor a 0.\n");
            } else if (calificaciones[i][j] > 10) {
                printf("La cantidad debe ser menor o igual a 10.\n");
            } else {
                valid = 1; 
            }
        }
    }
}

    //impresion de matriz actual
    for(i=0;i<numFilas;i++){
        for(j=0;j<numColumnas;j++){
            printf("%.2f   ",calificaciones[i][j]);
        }
        printf("\n");
    }
    // Calculo promedio Estudiante
    for(i=0;i<numFilas;i++){
        for(j=0;j<numColumnas;j++){
            suma = suma + calificaciones[i][j];
            
        }
        promedioEstudiante = suma / numColumnas;
        printf("El promedio del estudiante %d es %.2f",i+1,promedioEstudiante);
        printf("\n");
        suma=0;
    }
    // Calculo promedio por materia
    for(i=0;i<numColumnas;i++){
        for(j=0;j<numFilas;j++){
            suma = suma + calificaciones[j][i];
            
        }
        promedioAsignatura = suma / numFilas;
        printf("El promedio de la asignatura %d es %.2f",i+1,promedioAsignatura);
        printf("\n");
        suma=0;
    } 

    //Calculo maxima y minima nota del estudiante
    for(i=0;i<numFilas;i++){
        for(j=0;j<numColumnas;j++){
            if(calificaciones[i][j]>Max){
                Max = calificaciones[i][j];
            }

            if(calificaciones[i][j]<Min){
                Min = calificaciones[i][j];
            }
        }

        printf("La calificacion mas alta del estudiante %d es %.2f\n",i+1,Max);
        printf("La calificacion mas baja del estudiante %d es %.2f\n",i+1,Min);
        Max=0;
        Min=11;


    }
    // Calcula nota mas alta y mas baja de la asignatura
    for(i=0;i<numColumnas;i++){
        for(j=0;j<numFilas;j++){
            if(calificaciones[j][i]>Max){
                Max = calificaciones[j][i];
            }

            if(calificaciones[j][i]<Min){
                Min = calificaciones[j][i];
            }
        }

        printf("La calificacion mas alta de la asignatura %d son %.2f\n",i+1,Max);
        printf("La calificacion mas baja de la asignatura %d son %.2f\n",i+1,Min);
        Max=0;
        Min=11;


    }

    //Calcula los estudiantes aprobados y reprobados en la asignatura
    for(i=0;i<numColumnas;i++){
        for(j=0;j<numFilas;j++){
            if(calificaciones[j][i]>=6){
                estudiantesaprobados = estudiantesaprobados + 1;
            }else{
                estudiantesreprobados = estudiantesreprobados + 1;
            
            }
        }

        printf("Los estudiantes aprobado de la asignatura %d son %d\n",i+1,estudiantesaprobados);
        printf("Los estudiantes reprobados de la asignatura %d son %d\n",i+1,estudiantesreprobados);
        estudiantesaprobados=0;
        estudiantesreprobados=0;


    }
    

}