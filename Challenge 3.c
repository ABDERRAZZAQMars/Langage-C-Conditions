#include <stdlib.h>
#include <stdio.h>

int main()
{
    int nbr ;

    printf("Entrer Un Valeur : \n");
    scanf("%d",&nbr);

    if (nbr % 2 != 0)
    {
        printf("%d est un nombre est impair \n",nbr);
    }

    else if (nbr % 2 == 0)
    {
        printf("%d est un nombre est pair \n",nbr);
    }
    

    return 0;
}