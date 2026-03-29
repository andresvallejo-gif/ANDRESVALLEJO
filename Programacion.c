/*
Fecha:29/03/2026
Autor:Andrés Vallejo
Descripción: Se pide al usuario un valor inicial un valor final y un incremento. Luego utiliza un ciclo for para mostrar una secuencia
de valores desde el valor inicial hasta el final y esto lo hace según el incremento que ingrese el usuario.
*/ 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numero1, numero2, numero3;
    printf("Ingrese un valor inicial\n");
    scanf("%d", &numero1);
    printf("Ingrese un valor final\n");
    scanf("%d", &numero2);
    printf("Ingrese un valor de incremento\n");
    scanf("%d", &numero3);
    for (size_t i = numero1; i <= numero2; i+=numero3)
    {
        printf("%d\n", i );
    
    }
    


    return 0;
}
