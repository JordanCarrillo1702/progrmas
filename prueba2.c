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
        for (i = 0; i < numFilas; i++) {//recorre las filas
        for (j = 0; j < numColumnas; j++) {//recorre las columnas
            int valid = 0; //inicia bandera de inicializacion
            while (valid==0) {// inicia ciclo hasta que validacion sea valiada
                printf("Ingrese la calificacion del estudiante %d en la asignatura %d: ", i+1, j+1);//pide calificacion
                if (scanf("%f", &calificaciones[i][j]) != 1) {//lee flotante
                    printf("Entrada invalida. Debe ingresar un numero.\n");
                    while(getchar() != '\n'); //Limpia el buffer de entrada
                } else if (calificaciones[i][j] < 0) {//verifica si la nota es menor a 0
                    printf("La cantidad debe ser mayor a 0.\n");
                } else if (calificaciones[i][j] > 10) {// verifica si la nota es mayor a 0
                    printf("La cantidad debe ser menor o igual a 10.\n");
                } else {//si la validacion es exitosa termina while
                    valid = 1; 
                }
            }
        }
    }

        //impresion de matriz actual
        for(i=0;i<numFilas;i++){
            for(j=0;j<numColumnas;j++){
                printf("%.2f   ",calificaciones[i][j]);//recorre e imprime cada calificacion
            }
            printf("\n");// para que tenga un salto de linea
        }
        // Calculo promedio Estudiante
        for(i=0;i<numFilas;i++){
            for(j=0;j<numColumnas;j++){
                suma = suma + calificaciones[i][j];// Acumula suma calificaciones
                
            }
            promedioEstudiante = suma / numColumnas;// Calcula promedio dividiendo la suma por numero de asignaturas
            printf("El promedio del estudiante %d es %.2f",i+1,promedioEstudiante);
            printf("\n");//imprime
            suma=0;// reinicia el acumulador
        }
        // Calculo promedio por asignatura
        for(i=0;i<numColumnas;i++){
            for(j=0;j<numFilas;j++){
                suma = suma + calificaciones[j][i];//Calcula promedio dividiendo la suma por numero de estudiantes
                
            }
            promedioAsignatura = suma / numFilas;
            printf("El promedio de la asignatura %d es %.2f",i+1,promedioAsignatura);
            printf("\n");
            suma=0;//reinicia el acumulador
        } 

        //Calculo maxima y minima nota del estudiante
        for(i=0;i<numFilas;i++){
            for(j=0;j<numColumnas;j++){
                if(calificaciones[i][j]>Max){// se actualiza cada vez que sea mayor a Max
                    Max = calificaciones[i][j];//
                }

                if(calificaciones[i][j]<Min){// Se actualiza cada vez que sea menor que Min actual
                    Min = calificaciones[i][j];
                }
            }

            printf("La calificacion mas alta del estudiante %d es %.2f\n",i+1,Max);
            printf("La calificacion mas baja del estudiante %d es %.2f\n",i+1,Min);
            Max=0;// Reinicia Max y Min a sus valores iniciales antes de iniciar en el siguiente estudiante
            Min=11;


        }
        // Calcula nota mas alta y mas baja de la asignatura
        for(i=0;i<numColumnas;i++){
            for(j=0;j<numFilas;j++){
                if(calificaciones[j][i]>Max){// se actualiza cada vez que sea mayor a Max
                    Max = calificaciones[j][i];
                }

                if(calificaciones[j][i]<Min){// Se actualiza cada vez que sea menor que Min actual
                    Min = calificaciones[j][i];
                }
            }

            printf("La calificacion mas alta de la asignatura %d son %.2f\n",i+1,Max);
            printf("La calificacion mas baja de la asignatura %d son %.2f\n",i+1,Min);
            Max=0;// Reinicia Max y Min a sus valores iniciales antes de iniciar en el siguiente estudiante
            Min=11;


        }

        //Calcula los estudiantes aprobados y reprobados en la asignatura
        for(i=0;i<numColumnas;i++){
            for(j=0;j<numFilas;j++){
                if(calificaciones[j][i]>=6){//Mira si la nota es mayor igual a 6 entonces es aprobado
                    estudiantesaprobados = estudiantesaprobados + 1;
                }else{// de lo contrario cuenta como reprobado
                    estudiantesreprobados = estudiantesreprobados + 1;
                
                }
            }

            printf("Los estudiantes aprobado de la asignatura %d son %d\n",i+1,estudiantesaprobados);
            printf("Los estudiantes reprobados de la asignatura %d son %d\n",i+1,estudiantesreprobados);
            estudiantesaprobados=0;// reinicia los contadores antes de analizar la siguiente asignatura
            estudiantesreprobados=0;


        }
        

    }