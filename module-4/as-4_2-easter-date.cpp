#include <iostream>
using namespace std;

int demander_annee() {

    int yearInput {0};

    do {
        cout << "Entrez une annee (1583-4000) : ";
        cin >> yearInput;
    } while (yearInput<1583 || yearInput>4000);

    return yearInput;
}

void affiche_date(const int year, const int days) {
    cout << "Date de Paques en " << year << " : ";

    if (days<=31) {
        cout << days << " mars";
    } else {
        cout << days%31 << " avril";
    }

    cout << endl;

}

int date_Paques(const int year) {

    const int siecle {year/100};
    const int p {(13 + 8*siecle)/25};
    const int q {siecle/4};
    const int M {(15 - p + siecle - q)%30};
    const int N {(4 + siecle - q)%7};
    const int d {(M + 19 * (year%19))%30};
    const int e {(2 * (year % 4) + 4 * (year % 7) + 6 * d + N) % 7};

    int day {e+d+22};

    if (e==6 && (d==29 || (d==28 && ((11*(M+1))%30)<19 ))) {
        day-=7;
    }

    return day;
}

int as4_2() {

    const int year{demander_annee()};

    affiche_date(year, date_Paques(year));

    return 0;
}