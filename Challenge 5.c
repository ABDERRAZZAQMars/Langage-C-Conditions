#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a , b , somme;

    printf("Entrer La Valeur a : \n");
    scanf("%d",&a);

    printf("Entrer La Valeur b : \n");
    scanf("%d",&b);

    somme = a + b ;

    if (a==b)
    {
        printf("le triple de leur somme Est %d par ce que les deux valeurs sont identiques",somme*3);
    }

    else
    {
        printf("La Somme Est %d",somme);
    }
    


    return 0;
}