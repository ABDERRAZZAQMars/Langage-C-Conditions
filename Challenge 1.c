#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr;

    printf("Donner un entier : \n");
    scanf("%d",&nbr);

    if(nbr<0)
    {
        printf("Le nbr %d est negatif",nbr);
    }

    else if(nbr>0)
    {
        printf("Le nbr %d est positif",nbr);
    }

    else
    {
        printf("Le nbr %d est nul",nbr);
    }

    return 0;
}