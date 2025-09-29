#include <iostream>
#include <iomanip> // pour setprecision()
using namespace std;

int as3_2() {
    // Réduire le format d'affichage
    cout << setprecision(4);

    // Paramètres
    double taux_croissance_lapins(0.3);
    double taux_attaque(0.01);
    double taux_croissance_renards(0.008);
    double taux_mortalite(0.1);
    int duree(50);

    double renards_i(0.0);
    double lapins_i(0.0);

    /*****************************************************
     * Compléter le code à partir d'ici
     *****************************************************/


    /*
     * NOTE ABOUT THE QUALITY OF THIS ASSIGNMENT
     * It's really bad. Like really really bad. But it works...
     * Don't write code like this it's disgusting.
     */

    // ===== PARTIE 1 =====
    // Saisie des populations initiales

    // How many foxes?
    do {
        cout << "Combien de renards au départ (>= 2) ? ";
        cin >> renards_i;
    } while (renards_i<2);

    // How many rabbits?
    do {
        cout << "Combien de lapins au départ  (>= 5) ? ";
        cin >> lapins_i;
    } while (lapins_i<5);

    // ===== PARTIE 2 =====
    // Première simulation

    // initialise temporary storage variables
    double rabbits{lapins_i};
    double foxes{renards_i};

    // How many attacks
    cout <<  endl << "***** Le taux d'attaque vaut "<< taux_attaque * 100 << "%" <<  endl;

    // Calculations
    for (int i{1}; i<=duree; ++i) {
        // Rabbits
        double newRabbits = rabbits * (1.0 + taux_croissance_lapins - taux_attaque*foxes);

        // Foxes
        double newFoxes = foxes * (1.0 + taux_attaque*rabbits*taux_croissance_renards - taux_mortalite);

        if (newRabbits<=0) newRabbits = 0;
        if (newFoxes<=0) newFoxes = 0;

        cout << "Après " << i << " mois, il y a " << newRabbits << " lapins et " << newFoxes << " renards" << endl;

        rabbits = newRabbits;
        foxes = newFoxes;
    }


    // ===== PARTIE 3 =====
    // Variation du taux d'attaque

    // Store what happened
    bool rabbitsNearlyExtinct {false};
    bool rabbitsSurvived {false};
    bool foxesNearlyExtinct {false};
    bool foxesSurvived {false};




    cout << endl;

    double taux_attaque_i {0.0};
    do {
        cout << "taux d'attaque au départ en % (entre 0.5 et 6) ? ";
        cin >> taux_attaque_i;
    } while (taux_attaque_i<0.5 || taux_attaque_i>6.0);

    double taux_attaque_f {0.0};
    do {
        cout << "taux d'attaque à la fin  en % (entre " << taux_attaque_i;
        cout << " et 6) ? ";
        cin >> taux_attaque_f;
    } while (taux_attaque_f<=taux_attaque_i || taux_attaque_f>6.0);


    for (int j{0}; j<(taux_attaque_f-taux_attaque_i); ++j) {
        rabbits = lapins_i;
        foxes = renards_i;
        duree = 50;

        taux_attaque = (taux_attaque_i+j)/100;

        cout <<  endl << "***** Le taux d'attaque vaut "<< taux_attaque * 100 << "%" <<  endl;

        for (int i{1}; i<=duree; ++i) {
            // Rabbits
            double newRabbits = rabbits * (1.0 + taux_croissance_lapins - taux_attaque*foxes);

            // Foxes
            double newFoxes = foxes * (1.0 + taux_attaque*rabbits*taux_croissance_renards - taux_mortalite);


            if (rabbitsNearlyExtinct && newRabbits>5) rabbitsSurvived = true;
            if (newRabbits<5) rabbitsNearlyExtinct = true;
            if (newRabbits<2) newRabbits = 0;

            if (foxesNearlyExtinct && newFoxes>5) foxesSurvived = true;
            if (newFoxes<5) foxesNearlyExtinct = true;
            if (newFoxes<2) newFoxes = 0;

            if (newFoxes<2 && newRabbits<2) duree = i;

            rabbits = newRabbits;
            foxes = newFoxes;
        }
        cout << "Après " << duree << " mois, il y a " << rabbits << " lapins et " << foxes << " renards" << endl;



        if (foxesNearlyExtinct) cout << "Les renards ont été en voie d'extinction" << endl;

            if (foxes<2) cout << "et les renards ont disparu :-(" << endl;
            else if (foxesSurvived) cout << "mais la population est remontée ! Ouf !" << endl;

            if (rabbitsNearlyExtinct) cout << "Les lapins ont été en voie d'extinction" << endl;

            if (rabbits<2) cout << "et les lapins ont disparu :-(" << endl;
            else if (rabbitsSurvived) cout << "mais la population est remontée ! Ouf !" << endl;

            if (!(foxesNearlyExtinct || foxesSurvived || foxes<2 || rabbitsNearlyExtinct || rabbitsSurvived || rabbits<2))
                cout << "Les lapins et les renards ont des populations stables." << endl;

        }

        //finally istg i didnt sleep enough for this

        /*******************************************
         * Ne rien modifier après cette ligne.
         *******************************************/

        return 0;
    }