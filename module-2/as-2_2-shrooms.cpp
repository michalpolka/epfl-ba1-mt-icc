#include <iostream>
using namespace std;

int main() {

    // Initialise bools to store answers
    bool anneau {false};
    bool convexe {false};
    bool lamelles {false};
    bool foret {false};


    // What shroom you thinking of?
    cout << "Pensez à un champignon : amanite tue-mouches, pied bleu, girolle," << endl
        << "cèpe de Bordeaux, coprin chevelu ou agaric jaunissant." << endl << endl;


    // Anneau?
    cout << "Est-ce que votre champignon a un anneau (1 : oui, 0 : non) ? ";
    cin >> anneau;

    // Convexe?
    cout << "Est-ce que votre champignon a un chapeau convexe (1 : oui, 0 : non) ? ";
    cin >> convexe;

    // If not anneau: Cèpe de Bordeaux || Girolle || Pied Bleu
    if (!anneau) {

        // Lamelles?
        cout << "Est-ce que votre champignon a des lamelles (1 : oui, 0 : non) ? ";
        cin >> lamelles;



        // Output
        cout << "==> Le champignon auquel vous pensez est ";

        // If convexe: Pied Bleu (END)
        if (convexe) {
            cout << "le pied bleu";
            return 0;
        }

        // If lamelles: Girolle
        if (lamelles) {
            cout << "la girolle";
        }

        // If not lamelles: Cèpe de Bordeaux
        if (!lamelles) {
            cout << "le cèpe de Bordeaux";
        }

        // END (we don't want it going to the next if)
        return 0;
    }



    // If anneau: Amanite tue-mnouches || Agaric jaunissant || Coprin Chevelu
    if (anneau) {

        // Foret?
        cout << "Est-ce que votre champignon vit en forêt (1 : oui, 0 : non) ? ";
        cin >> foret;



        // Output
        cout << "==> Le champignon auquel vous pensez est ";

        // If not convexe: Coprin Chevelu (END)
        if (!convexe) {
            cout << "le coprin chevelu";
            return 0;
        }

        // If foret: amanite tue-mouche
        if (foret) {
            cout << "l'amanite tue-mouches";
        }

        // If not foret: Agaric jaunissant
        if (!foret) {
            cout << "l'agaric jaunissant";
        }

    }

    return 0;
}




