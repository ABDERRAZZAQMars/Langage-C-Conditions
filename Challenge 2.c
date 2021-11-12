#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float F , C ;

    printf("Entrer la temperature en Fahrenheit : \n");
    scanf("%f",&F);

    C = (F-32) / 1.8 ;

    if (C<0)
    {
        printf("Tres froid Par Ce Que C = %f \n",C);
    }

    else if (0<C<20)
    {
        printf("froid Par Ce Que C = %f \n",C);
    }

    else if (20<C<30)
    {
        printf("Chaud Par Ce Que C = %f \n",C);
    }

     else if (C>30)
    {
        printf("Tres Chaud Par Ce Que C = %f \n",C);
    }

    return 0;
}