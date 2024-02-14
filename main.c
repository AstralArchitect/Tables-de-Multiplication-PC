#include <stdio.h>

int main()
{
    int table;
    int reponse;
    int score = 0;
    printf("Bienvenue dans le programme de révision des tables de multiplications\n");
    printf("Quelle table de multiplication voulez-vous réviser ?\n")
    scanf("%d", table);

    for (int i = 0; i < 10 /*c'est nombre de fois que tu veux répéter cette boucle */; i++)
    {
        //poser la question à l'utilisateur
        int bonneReponse = table * i;
        printf("Combien font %d X %i\n", table, i);
        scanf("%d", reponse);
        //vérifictaion de sa réponse
        if (reponse == bonneReponse)
        {
            printf("Bravo, continuons\n");
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
        printf("Tu as eu %d bonnes reponses, ce qui te fait un score de %d/20 !\n", score, score * score);
    }
    else if (score == 1)
    {
        printf("Tu as eu %d bonne reponse, ce qui te fait un score de %d/20 !\n", score, score * score);
    }
    if (score < 7)
    {
        printf("Il va faloir réviser tes tables de multiplications !\n");
    }
    else if (score < 7 && score != 10)
    {
        printf("Bravo, mais vous pouvezfaire encore mieux.\n");
    }
    else if (score == 10)
    {
        printf("Exellent, vous êtes un pro de tables de multiplications !\n");
    }
    
    return 0;
}
