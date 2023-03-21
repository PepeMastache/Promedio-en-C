

#include <stdio.h>

void main() {
    int calif1, calif2, calif3, calif4;
    int total;
    
    float promedio;
    
printf("Dame tus cuatro calificaciones\n");
scanf("%d %d %d %d", &calif1, &calif2, &calif3, &calif4);

total= calif1+calif2+calif3+calif4;

printf("La suma de tus calificaciones es de %d\n", total);

promedio = (float)total/4;

printf("Tu promedio de calificaciones es: %f", promedio);

if(promedio >= 6)

printf("\n\n\t PASASTEEESSS :)");
else

printf("\n\n\t NO PASASTEEESSS :(");
}

