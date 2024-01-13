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
    auto mauvaiseReponses{0};
    auto bonneReponses{0};
    cin >> proposition;

    for (size_t i = 0; i < 12 /*c'est nombre de fois que tu veux répéter cette boucle */; i++)
    {
        int multiplieur{random(1, 12)};
        //vérification pour ne pas répéter plusieurs fois la même question
        bool isPresent;
        while(isPresent)
        {
        int arraySize = sizeof(verif) / sizeof(*verif);
        isPresent = std::find(verif, verif + arraySize, multiplieur) != verif + arraySize;
        if(!(isPresent))
        {
        multiplieur = random(1, 12);
        break;
        }
        }
        verif[i] = multiplieur;
        //poser la question à l'utilisateur
        int bonneReponse{proposition * multiplieur};
        cout << "Combien font " << proposition << " X " << multiplieur << " ?" << endl;
        cin >> reponse;
        //vérifictaion de sa réponse
        if (reponse == bonneReponse)
        {
            cout << "Bravo, continuons" << endl;
            bonneReponses = bonneReponses + 1;
        }
        else
        {
            cout << "mauvaise réponse" << endl;
            cout << "la réponse était : " << bonneReponse << endl;
            mauvaiseReponses = mauvaiseReponses + 1;
        }
    }
    // dire le score
    if ((bonneReponses == 1) && (mauvaiseReponses == 1))
    {
        cout << "Tu as eu " << bonneReponses << " bonnes réponses et " << mauvaiseReponses << " mauvaise reponse." << endl;
    }
    if ((bonneReponses != 1) && (mauvaiseReponses == 1))
    {
        cout << "Tu as eu " << bonneReponses << " bonnes réponses et " << mauvaiseReponses << " mauvaise reponse." << endl;
    }
    if ((bonneReponses == 1) && (mauvaiseReponses != 1))
    {
        cout << "Tu as eu " << bonneReponses << " bonne réponse et " << mauvaiseReponses << " mauvaises reponses." << endl;
    }
    if ((bonneReponses != 1) && (mauvaiseReponses != 1))
    {
        cout << "Tu as eu " << bonneReponses << " bonne réponse et " << mauvaiseReponses << " mauvaise reponse." << endl;
    }
    cout << "ce qui te fait un score de " << int((float(bonneReponses) / 12.0) * 20.0) << "/20 !" << endl;
    if (bonneReponses < 7)
    {
        cout << "il va faloir réviser tes tables de multiplications" << "\n" << endl;
    }
    return 0;
}