#include <stdio.h>
#include <stdlib.h>
#include <C:\Users\monro\Desktop\PracticasFundamentos\Workspace\Practica02.h>

void main()
{

    int opcional;
    int why = 0;
    while (!why)
    {

        printf("\nPor favor seleccione la opción a llevar\n1->Ecuaciones diofanticas.\n2->Salir del programa\n");
        fflush(stdin);
        scanf("%d", &opcional);
        switch (opcional)
        {

        case 1:
        {
            system("cls");
            printf("Ecuaciones diofanticas\n");
            Eucli();
            cambios();
            validacion();
            break;
        }
        case 2:
        {
            printf("Saliendo del programa");
            why++;
            break;
        }
        }
    }
}