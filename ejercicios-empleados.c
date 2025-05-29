#include <stdio.h>

int main()
{
    char empleados[][50] = {
     "El Empleado Fantasma",
     "Alejando Dolina",    
     "PEPE mujica",
     "Don Quijote de la mancha",
     "Sancho Panza",
     "El caballero de la triste figura"
    };
    int sueldos[6][5] = {
        {0, 0, 0, 0, 0},
        {2000, 3000, 30020, 20010, 200},
        {2313, 123131, 13131, 1321, 1231},
        {2000, 3000, 30020, 20010, 200},
        {2313, 123131, 13131, 1321, 1231},
        {20300, 30300, 300220, 200110, 2020}
    };
    int pregunta;
    scanf("%i",&pregunta);
    
    printf("%i", pregunta);
    printf(" Es %s\n", empleados[pregunta]);    
    
    int mayor = sueldos[pregunta][0];
    for (int i=1; i < 5; i++) {
        if (sueldos[pregunta][i] > mayor) {
         mayor = sueldos[pregunta][i];
        }
    }
    
    
    printf("\n Y su mayor sueldo es de %i\n", mayor);
    
    
    return 0;
        
}  
