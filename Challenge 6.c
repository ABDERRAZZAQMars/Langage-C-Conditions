#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int a , b, c , delta;
    float x1 , x2;

    printf("Entrer La valeur a : \n");
    scanf("%d",&a);

    printf("Entrer La valeur b : \n");
    scanf("%d",&b);

    printf("Entrer La valeur c : \n");
    scanf("%d",&c);

    delta = (b*b) - (4*a*c) ;

    if (delta < 0)
    {
        printf("Il n'a y pas de solution \n") ;
    }

    else if (delta > 0)
    {
        x1 = - b - sqrt(delta) / 2* a ;
        x2 = - b + sqrt(delta) / 2* a ;

        printf("La Solution 1 : x1 = - b - sqrt(delta) / 2* a Est %.2f \n",x1);
        printf("La Solution 2 : x2 = - b + sqrt(delta) / 2* a Est %.2f \n",x2);
    }

    else
    {
        x1 = - b / 2 * a ;

        printf("La Solution Est %.2f \n",x2);
    }
    

    return 0;
}