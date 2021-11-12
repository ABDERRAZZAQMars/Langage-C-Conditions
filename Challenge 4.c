#include <stdlib.h>
#include <stdio.h>

int main()
{
     char test;

    printf("Caractere : \n");
    scanf("%c", &test);

    switch (test) 
    {
        case ('a'):
        {
            printf("voyelle\n");
            break;
        }
            
        case ('e'):
        {
            printf("voyelle\n");
            break;
        }
            
        case ('i'):
        {
            printf("voyelle\n");
            break;
        }
            
        case ('o'):
        {
            printf("voyelle\n");
            break;
        }
            
        case ('u'):
        {
            printf("voyelle\n");
            break;
        }
            
        case ('y'):
        {
            printf("voyelle\n");
            break;
        }
            
        default:
        {
            printf("Non voyelle\n");
            break;
        }
            
    }

    return 0;
}