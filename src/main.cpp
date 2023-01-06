#include <iostream>
#include "daire.h"

using namespace std;

int main () {

    string deneme = "naber bro ben calistim :D";

    cout << deneme << endl;

    Daire d;
    cout << "Yaricapi giriniz: ";
    cin >> d.r;

    cout << "\nAlan: " << d.alan() << endl;
    cout << "\nCevre: " << d.cevre() << endl;

    system("PAUSE");

    return 0;
}