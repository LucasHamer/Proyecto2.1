#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cant_h, sueldo;
    int valor_h;
    printf("ingrese cantidad de horas: ");
    scanf("%f",&cant_h);
    printf("ingrese el valor por hora: ");
    scanf("%d",&valor_h);
    sueldo= cant_h*valor_h;
    printf("Su sueldo es de: %f", sueldo);

    return 0;
}
