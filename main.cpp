#include <iostream>
#include <algorithm>
#include <random>

std::random_device rd;
std::mt19937 gen(rd());

int random(int low, int high)
{
    std::uniform_int_distribution<> dist(low, high);
    return dist(gen);
}

int main()
{
    using namespace std;
    cout << "Bienvenue dans le programme de révision des tables de multiplications de Grégoire!" << endl;

    cout << "Quelle table de multiplication veux-tu reviser ? " << endl;
    int verif[12];
    auto proposition{0};
    auto reponse{0};
    auto mauvaiseReponse{0};
    auto bonneReponse{0};
    cin >> proposition;

    for (size_t i = 0; i < 12 /*c'est nombre de fois que tu veux répéter cette boucle */; i++)
    {
        //vérification pour ne pas répéter plusieurs fois la même question
        int multiplieur{random(1, 12)};
        int arraySize = sizeof(verif) / sizeof(*verif);
        bool isPresent = std::find(data, data + arraySize, target) != data + arraySize;
        verif[i] = multiplieur;
        int bonneReponse{proposition * multiplieur};
        cout << "Combien font " << proposition << " X " << multiplieur << " ?" << endl;
        cin >> reponse;

        if (reponse == bonneReponse)
        {
            cout << "Bravo, continuons" << endl;
            bonneReponse = bonneReponse + 1;
        }
        else
        {
            cout << "mauvaise réponse" << endl;
            cout << "la réponse était : " << bonneReponse << endl;
            mauvaiseReponse = mauvaiseReponse + 1;
        }
    }

    if ((bonneReponse = 1) && (mauvaiseReponse = 1))
    {
        cout << "Tu as eu " << bonneReponse << " bonnes réponses et " << mauvaiseReponse << " mauvaise reponse." << endl;
    }
    if ((bonneReponse != 1) && (mauvaiseReponse = 1))
    {
        cout << "Tu as eu " << bonneReponse << " bonnes réponses et " << mauvaiseReponse << " mauvaise reponse." << endl;
    }
    if ((bonneReponse = 1) && (mauvaiseReponse != 1))
    {
        cout << "Tu as eu " << bonneReponse << " bonne réponse et " << mauvaiseReponse << " mauvaises reponses." << endl;
    }
    if ((bonneReponse != 1) && (mauvaiseReponse != 1))
    {
        cout << "Tu as eu " << bonneReponse << " bonne réponse et " << mauvaiseReponse << " mauvaise reponse." << endl;
    }
    cout << "ce qui te fait un score de " << bonneReponse << "/12 !" << endl;
    if (bonneReponse < 7)
    {
        cout << "il va faloir réviser tes tables de multiplications";
    }
    return 0;
}