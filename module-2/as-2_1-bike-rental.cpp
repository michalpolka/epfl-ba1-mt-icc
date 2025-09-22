#include <iostream>
using namespace std;

int as2_1()
{
    cout << "Donnez l'heure de début de la location (un entier) : ";
    int debut;
    cin >> debut;

    cout << "Donnez l'heure de fin de la location (un entier) : ";
    int fin;
    cin >> fin;

    /*****************************************************
     * Compléter le code à partir d'ici
     *****************************************************/

    if (debut<0 || debut>24 || fin<0 || fin>24) {
        cout << "Les heures doivent être comprises entre 0 et 24 !" << endl;
        return 0;
    }

    if (debut==fin) {
        cout << "Bizarre, vous n'avez pas loué votre vélo bien longtemps !" << endl;
        return 0;
    }

    if (debut>fin) {
        cout << "Bizarre, le début de la location est après la fin ..." << endl;
        return 0;
    }

    int hours1 {0};
    int hours2 {0};

    if ((debut<=7)) {

        if (fin<=7) {
            hours1 = fin-debut;
        }

        else if (fin<=17) {
            hours1 = 7-debut;
            hours2 = fin-7;
        }

        else {
            hours1 = 7-debut + fin-17;
            hours2 = 10;
        }

    } else if (debut<=17) {

        if (fin<=17) {
            hours2 = fin-debut;
        }

        else {
            hours1 = fin-17;
            hours2 = 17-debut;
        }

    } else {

        hours1 = fin-debut;

    }


    cout << "Vous avez loué votre vélo pendant" << endl;

    if (hours1>0) {
        cout << hours1 << " heure(s) au tarif horaire de 1 franc(s)" << endl;
    }

    if (hours2>0) {
        cout << hours2 << " heure(s) au tarif horaire de 2 franc(s)" << endl;
    }

    cout << "Le montant total à payer est de " << (hours1 + 2*hours2)
         << " franc(s)." << endl;

    /*******************************************
     * Ne rien modifier après cette ligne.
     *******************************************/

    return 0;
}
