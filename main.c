#include <stdio.h>

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
        //vérifictaion de sa réponse
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
    if (score > 1)
    {
        printf("Vous avez eu %d bonnes reponses, ce qui te fait un score de %d/10 !\n", score, score);
    }
    else if (score == 1)
    {
        printf("Vous avez eu %d bonne reponse, ce qui te fait un score de %i/10 !\n", score, score);
    }
    if (score < 7)
    {
        printf("Il va faloir réviser tes tables de multiplications !\n");
    }
    else if (score < 7 && score != 10)
    {
        printf("Bravo, mais vous pouvez faire encore mieux.\n");
    }
    else if (score == 10)
    {
        printf("Exellent, vous etes un pro de tables de multiplications !\n");
    }
    
    return 0;
}
