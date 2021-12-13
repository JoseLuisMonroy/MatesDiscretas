#include <stdio.h>
#include <stdlib.h>

int x, y, valc, ini, medio, fin, transforx, transfory, mcd, resul, ecu;
int multi;
int fini[14];
int medii[14];
void Eucli()
{
    printf("Introduzca el valor para a:");
    fflush(stdin);
    scanf("%d", &x);
    if (x < 0)
    {
        transforx = x * -1;
    }
    else
    {
        transforx = x;
    }
    printf("Introduzca el valor para b:");
    fflush(stdin);
    scanf("%d", &y);
    if (y < 0)
    {
        transfory = y * -1;
    }
    else
    {
        transfory = y;
    }
    printf("Indtroduzca el valor para c:");
    scanf("%d", &valc);
    if (transforx >= transfory)
    {
        ini = transforx;
        medio = transfory;
        multi = ini % medio;
        fin = ini % medio;
    }
    else
    {
        ini = transfory;
        medio = transforx;
        multi = ini % medio;
        fin = ini % medio;
    }
}
void cambios()
{
    int cuenta;
    int nule = 0;
    for (cuenta = 0; cuenta < 15; cuenta++)
    {
        fini[cuenta] = fin;
        medii[cuenta] = medio;
        printf("%d = %d (%d) + %d \n", ini, medio, multi, fin);
        if (fin == 0)
        {
            int variable = ini % medio;
            if (variable != 0)
            {
                printf("Se han acabado los despalazamientos\n");
                printf("El maximo comun divisor es: %d", fini[cuenta - 1]);
                mcd = fini[cuenta - 1];
            }
            else if (variable == 0)
            {
                printf("Se han acabado los despalazamientos\n");
                printf("El maximo comun divisor es: %d \n\n", medii[cuenta]);
                mcd = medii[cuenta];
            }
            break;
        }
        ini = medio;
        medio = fin;
        multi = ini % medio;
        fin = ini % medio;
    }
}
void validacion()
{
    resul = valc % mcd;
    if (resul == 0)
    {
        printf("La ecuacion (%dx)+(%dy)=%d tiene solucion, puesto que %d entre %d es un entero",x,y,valc, valc, mcd);
    }
    else
    {
        printf("La ecuacion no tiene solucion, puesto que el resultado de la divición de %d entre %d no pertenece a los enteros", valc, mcd);
    }
}
