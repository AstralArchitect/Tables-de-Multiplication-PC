#include <stdio.h>
#include <conio.h>

int main()
{
    int table;
    int reponse;
    int score = 0;
    printf("Bienvenue dans le programme de revision des tables de multiplications\n");
    printf("Quelle table de multiplication voulez-vous reviser ?\n");
    scanf("%d", &table);

    for (int i = 0; i < 10 /*c'est nombre de fois que tu veux répéter cette boucle */; i++)
    {
        //poser la question à l'utilisateur
        int bonneReponse = table * i;
        printf("Combien font %d X %i ? :", table, i);
        scanf("%d", &reponse);
        //vérifictaion de la réponse
        if (reponse == bonneReponse)
        {
            score++;
        }
        else
        {
            printf("Mauvaise reponse !\t");
            printf("La reponse etais : %d\n", bonneReponse);
        }
    }
    // dire le score
    printf("Vous avez eu un score de %d/20 !\n", score * 2);
    if (score < 7)
    {
        printf("Il va faloir reviser tes tables de multiplications !\n");
    }
    else if (score < 7 && score != 10)
    {
        printf("Bravo, mais vous pouvez faire encore mieux.\n");
    }
    else if (score == 10)
    {
        printf("Exellent, vous etes un pro de tables de multiplications !\n");
    }
    system("pause");
    return 0;
}
