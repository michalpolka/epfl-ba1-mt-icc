#include <iostream>
#include <ctime>

// pour les nombres aléatoires
#include <random>
#include <cstring> // strlen

using namespace std;

// ======================================================================
// Couleur au hasard
std::uniform_int_distribution<int> distribution;
std::default_random_engine generateur(time(NULL)); /* NOT using std::random_device since not
                                                    * all compilers seems to support it :-( */

char tirer_couleur()
{
  static const char* const couleurs = ".RGBCYM";
  static const int nb = strlen(couleurs) - 1;

  return couleurs[distribution(generateur,
                               std::uniform_int_distribution<int>::param_type {0, nb})];
}

// ======================================================================
char poser_question()
{
  char lu(' ');
  cout << "Entrez une couleur : ";
  cin >> lu;
  return lu;
}

// ---- prototype -------------------------------------------------------
bool couleur_valide(char c);

// ======================================================================
char lire_couleur()
{
  char lu(poser_question());
  while (not couleur_valide(lu)) {
    cout << "'" << lu << "' n'est pas une couleur valide." << endl;
    cout << "Les couleurs possibles sont : ., R, G, B, C, Y ou M." << endl;
    lu = poser_question();
  }
  return lu;
}

// ======================================================================
void afficher_couleurs(char c1, char c2, char c3, char c4)
{
  cout << ' ' << c1 << ' ' << c2 << ' ' << c3 << ' ' << c4;
}

// ======================================================================
void afficher(int nb, char c)
{
  while (nb-- > 0) {
    cout << c;
  }
}

// ---- prototype -------------------------------------------------------
void afficher_reponses(char c1, char c2, char c3, char c4,
                       char r1, char r2, char r3, char r4);

// ======================================================================
void afficher_coup(char c1, char c2, char c3, char c4,
                   char r1, char r2, char r3, char r4)
{
  afficher_couleurs(c1, c2, c3, c4);
  cout << " : ";
  afficher_reponses(c1, c2, c3, c4,
                    r1, r2, r3, r4);
  cout << endl;
}

// ======================================================================
void message_gagne(int nb_coups)
{
  cout << "Bravo ! Vous avez trouvé en " << nb_coups << " coups." << endl;
}

// ======================================================================
void message_perdu(char c1, char c2, char c3, char c4)
{
  cout << "Perdu :-(" << endl;
  cout << "La bonne combinaison était : ";
  afficher_couleurs(c1, c2, c3, c4);
  cout << endl;
}

/*****************************************************
 * Compléter le code à partir d'ici
 *****************************************************/

// ======================================================================
bool couleur_valide(char c)
{
  if (c=='.' || c=='R' || c=='G' || c=='B' || c=='C' || c=='Y' || c=='M') {
    return true;
  }
  return false;
}

// ======================================================================
bool verifier(// A remplir
  const char c, char& r, int& score
             )
{
  if (c==r) {
    r = 'x';
    ++score;
    return true;
  }
  return false;
}

// ======================================================================
void apparier(// A remplir
  const char testCol, char& r1, char& r2, char& r3, int& n
             )
{
  if (verifier(testCol,r1,n)) return;
  if (verifier(testCol,r2,n)) return;
      verifier(testCol,r3,n);
}

// ======================================================================
void afficher_reponses(char c1, char c2, char c3, char c4,
                       char r1, char r2, char r3, char r4)
{
  verifier()
}

// ======================================================================
bool gagne(char c1, char c2, char c3, char c4,
           char r1, char r2, char r3, char r4)
{
  if (c1==r1 && c2==r2 && c3==r3 && c4==r4) {
    return true;
  }
  return false;
}

// ======================================================================
void jouer(const int maxHits = 8)
{
  const char ref1 {tirer_couleur()};
  const char ref2 {tirer_couleur()};
  const char ref3 {tirer_couleur()};
  const char ref4 {tirer_couleur()};

  char c1 {};


  int hits {0};

  do {



  } while (!gagne(c1,c2,c3,c4,ref1,ref2,ref3,ref4) && hits++<maxHits);

  if (gagne(c1,c2,c3,c4,ref1,ref2,ref3,ref4)) {
    message_gagne(hits);
  } else {
    message_perdu(ref1,ref2,ref3,ref4);
  }

}

/*******************************************
 * Ne rien modifier après cette ligne.
 *******************************************/

int as4_3()
{
  jouer();
  return 0;
}
