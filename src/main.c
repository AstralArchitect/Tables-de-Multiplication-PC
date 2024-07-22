#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool array_contain(int array[10], int num);

int main()
{
    srand(time(NULL));
    int table;
    int reponse;
    int score = 0;
    printf("Bienvenue dans le programme de revision des tables de multiplications\n");
    printf("Quelle table de multiplication voulez-vous reviser ?\n");
    scanf("%d", &table);

    int reponsesListe[10];
    for (int i = 0; i < 10; i++)
    {
        reponsesListe[i] = 11;
    }
    

    for (int i = 0; i < 10; i++)
    {
        int randomNumber = rand() % 10;
        while (array_contain(reponsesListe, randomNumber))
        {
            randomNumber = rand() % 10;
        }
        reponsesListe[i] = randomNumber;
        //poser la question à l'utilisateur
        int bonneReponse = table * randomNumber;
        printf("Combien font %d X %i ? :", table, randomNumber);
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

bool array_contain(int array[10], int num)
{
    for (int i = 0; i < 10; i++)
    {
        if (array[i] == num)
        {
            return true;
        }
    }
    return false;
}