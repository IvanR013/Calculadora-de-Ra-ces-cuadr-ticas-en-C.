#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>

// Estructura para números complejos y funciones adicionales a main.

typedef struct  
{
    double real;
    double imag;

} Complex;


//Función para que el usuario ingrese los coeficientes.
double ReadDouble(){

    double valor;
    scanf("%lf", &valor);
    
    return valor;
}


// Función que calcula las raíces de la funció con los coeficientes que ingresó el usuario.
void QuadRoots()
{
    double a,b,c,D;

    printf("Ingrese el coeficiente de a: \n");
    a =  ReadDouble();    
    
    printf("Ingrese el coeficiente de b: \n");
    b = ReadDouble();    
    
    printf("Ingrese el coeficiente de c: \n");
    c = ReadDouble();   

    D = pow(b, 2) - 4* a * c;  // Cálculo del discriminante.

    if (D > 0)
    {
        double root1, root2;

        root1 = (-b + sqrt(D))/(2*a);
        
        root2 = (-b - sqrt(D))/(2*a);

        printf("Las raíces son reales y diferentes.\n");
        printf("Raíz 1 : %.2lf", root1);

        printf("Raíz 2: %.2lf", root2);
    
    }else if(D == 0)
    {
        double root3;
        
        root3 = -b/(2*a);

        printf("Hay una sola raíz y es el vértice de la función.\n");
        printf("Raíz: %.2lf", root3);

        }else // Caso complejo.
        {
            Complex rootc1, rootc2;

            rootc1.real = -b / (2*a); // parte real.
            rootc2.imag = -sqrt(-D) / (2*a); // parte imaginaria.
        
            printf("Las raíces son complejas y conjugadas.\n");
            
            printf("Raíz 1: %.2lf + %.2lfi\n", rootc1.real,rootc1.imag);

            printf("Raíz 2: %.2lf + %.2lfi\n", rootc2.real,rootc2.imag);
        }
    
}


int main() // El main solo llama a las funciones adicionales para correr el programa.
{
   QuadRoots();

   return(0); 
}



