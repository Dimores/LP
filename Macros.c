/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    // Macros
    #define imprimir puts
    #define dobro(VAR) 2 * (VAR)
    #define max(a, b) ((a) > (b) ? (a) : (b))
    #define min(a, b) ((a) < (b) ? (a) : (b))
    #define eleva(base, expoente) (int)(pow((double)(base), (double)(expoente)))
    #define fatorial(x) (x) == (1) ? 1 : (x) * (x * x) - (x)


    int x, y , z;
    
    x = 2;
    y = 4;
    z = 6;
    
    x = dobro(y + 3);
    printf("X = %d", x);
    puts("");
    x = max(y, z);
    printf("X = %d", x);
    puts("");
    x = min(y, z);
    printf("X = %d", x);
    puts("");
    x = fatorial(4);
    printf("X = %d", x);
    puts("");
    x = eleva(y, 2);
    printf("X = %d", x);
    puts("");


    
    

    return 0;
}
