#include <stdio.h>

int suma_start(int a, int b)
{
    return a + b;
}
int resta_start(int a, int b)
{
    return a - b;
}
int multiplicacion_start(int a, int b)
{
    return a * b;
}
int division_start(int a, int b){
    if (b != 0) {
        return a / b;
    } else
    {
        printf("Error: Division por cero.\n");
        return 0; // Retorna 0 en caso de division por cero
    }
    
}