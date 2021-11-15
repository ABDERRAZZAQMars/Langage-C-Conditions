#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Annee , Mois , Jours , Heures , Minutes , Secondes ;

    printf("menu pour convertir une annee : \n");
    printf("1. Mois\n");
    printf("2. Jours \n");
    printf("3. Heures \n");
    printf("4. Minutes \n");
    printf("5. Secondes \n");
    scanf("%d",&Annee);

    switch (Annee)
    {
    case 1:
        {
            printf("12mois");
            break;
        }

    case 2:
        {
            printf("365 Jours");
            break;
        }

    case 3:
        {
            printf("8760 Heurs");
            break;
        }

    case 4:
        {
            printf("525600 Minutes");
            break;
        }

    case 5:
        {
            printf("31536000 Secondes");
            break;
        }
        
    
    default:
        break;
    }
    

    return 0;
}