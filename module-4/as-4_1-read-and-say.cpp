#include <iostream>
using namespace std;

int separer_chiffre_gauche(int& nombre)
{
    int dix(1);
    int temp(nombre);
    while (temp >= 10) {
        dix  *= 10;
        temp /= 10;
    }
    nombre %= dix;
    return temp;
}

/*****************************************************
 * Compléter le code à partir d'ici
 *****************************************************/

void ajouter_chiffre_droit(int& nombre, int chiffre)
{
    nombre = nombre*10 + chiffre;
}

void dire_chiffre(int& nombre, int repetitions_chiffre, int chiffre)
{
    ajouter_chiffre_droit(nombre, repetitions_chiffre);
    ajouter_chiffre_droit(nombre, chiffre);
}

int lire_et_dire(int nombre)
{

    // input = 3222 1
    //expected output: 1332
    int input {nombre};

    int currentNumber {separer_chiffre_gauche(input)}; // get first number -> 3 (input->222)
    int nextNumber {separer_chiffre_gauche(input)}; // get next number
    int currentReps {1}; // how many times will it appear? -> min 1

    int temp {0}; // will be used to store the new value of currentNumber

    int output {}; // where the output will go

    do {
        // cout << "current: " << currentNumber << " / currentReps: " << currentReps << " / next: " << nextNumber << " / input: " << input << endl;

        if (nextNumber == currentNumber) { // if the next number is equal to the current one, increment the repetition counter
            ++currentReps;
        } else { // otherwise, add the number and repetitions to the output
            dire_chiffre(output, currentReps, currentNumber);
            currentReps = 1;
        }

        currentNumber = nextNumber;
        nextNumber = separer_chiffre_gauche(input);
        // cout << "current: " << currentNumber << " / currentReps: " << currentReps << " / next: " << nextNumber << " / input: " << input << endl;
        // cout << "-> " << output << endl;

    } while (currentNumber>0);

    // cout << "--> " << output << endl << endl;

    return output;

}

/*******************************************
 * Ne rien modifier après cette ligne.
 *******************************************/

void repeter_lire_et_dire(int& nombre, int fois)
{
    while (fois-- > 0) {
        nombre = lire_et_dire(nombre);
    }
}

int as4_1()
{
    int nombre(1);
    int fois(1);
    cin >> nombre >> fois;
    repeter_lire_et_dire(nombre, fois);
    cout << nombre << endl;
    return 0;
}
