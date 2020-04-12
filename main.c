#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv)
{
    // C'est un programme + ou -

    //voici la proposition du cours
/*
    do
    {
        printf("Guess the number I'm thinking about : ");
        scanf("%d", &x);

        if (x > n)
        {
            printf("Less...\n");
        }
        else if (x < n)
        {
            printf("More...\n");
        }
        else
        {
            printf("Yes ! It was %d congrats !", n);
        }
    }while(x != n);
*/

    // et la mienne avec les améliorations demandées

    srand(time(NULL));  // ligne obligatoire pour une génération aléatoire de nombre (à n'écrire qu'une fois)

    int continu = 1;
    while (continu)
    {
        const int MIN = 1;
        int n = 0, x = 0, compteur = 0, max = 1, level = 0;

        int choice = 0;
        printf("\nDo you wanna play 1 or 2 players ? ");
        scanf("%d", &choice);

        printf("\n1 : from 1 to 100\n2 : from 1 to 1,000\n3 : from 1 to 10,000\nType the level you want : ");
        scanf("%d",&level);

        switch (level)
        {
            case 1:
                max = 100;
                break;
            case 2:
                max = 1000;
                break;
            case 3:
                max = 10000;
                break;
            default:
                max = 100;
                break;
        }

        if (choice == 1)
        {
            n = (rand() % (max - MIN + 1)) + MIN;   // génération aléatoire du nombre (on peut l'écrire autant de fois qu'on le veut)
        }
        else
        {
            printf("Type the secret number and scroll down : ");
            scanf("%d", &n);
        }

        printf("\n");
        while (x != n)
        {
            printf("Guess the number I'm thinking about : ");
            scanf("%d", &x);
            compteur ++;

            if (x < n)
            {
                printf("More...\n");
            }
            else if (x > n)
            {
                printf("Less...\n");
            }
            else
            {
               printf("\nYes ! It was %d congrats !\nYou made it in %d try !", n, compteur);
            }
        }
        printf("\n\nIf you wanna replay, then press 1, else, press 0 : ");
        scanf("%d", &continu);
    }

    printf("\n");
    return 0;
}
