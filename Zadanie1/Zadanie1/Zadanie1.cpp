#include <iostream>
using namespace std;

struct Data
{
    unsigned int dd, mm, rr;
};

struct Pracownik
{
    string imie;
    string nazwisko;
    string stanowisko;
    Data data_urodzenia;
};

int main()
{
    Pracownik pracownik_nr1 = {
        "Arkadiusz",
        "Waliczek",
        "Nauczuciel",
        {2, 12, 2000}
    };
    Pracownik pracownik_nr2 = {
        "Mariusz",
        "Waliczek",
        "Nauczuciel",
        {3, 13, 2010}
    };
    Pracownik pracownik_nr3 = {
        "Amadeusz",
        "Waliczek",
        "Nauczuciel",
        {9, 12, 1990}
    };

    cout << pracownik_nr1.imie << endl;
    cout << pracownik_nr1.nazwisko << endl;
    cout << pracownik_nr1.stanowisko << endl;
    cout << pracownik_nr1.data_urodzenia.dd << endl;
    cout << pracownik_nr1.data_urodzenia.mm << endl;
    cout << pracownik_nr1.data_urodzenia.rr << endl << endl;

    cout << pracownik_nr2.imie << endl;
    cout << pracownik_nr2.nazwisko << endl;
    cout << pracownik_nr2.stanowisko << endl << endl;

    cout << pracownik_nr3.imie << endl;
    cout << pracownik_nr3.nazwisko << endl;
    cout << pracownik_nr3.stanowisko << endl << endl;

    return EXIT_SUCCESS;
}
