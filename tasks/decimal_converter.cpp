#include <iostream>

using namespace std;

int main() {
    cout << "Program zamiany liczby z systemu dziesietnego na inny system liczbowy" << endl;
    cout << "Podaj liczbe w systemie dziesietnym: ";
    int decimalNumber;
    cin >> decimalNumber;

    cout << "Podaj podstawe systemu docelowego (2-10): ";
    int targetBase;
    cin >> targetBase;

    if (targetBase < 2 || targetBase > 10) {
        cout << "Podstawa systemu docelowego musi byc w zakresie od 2 do 10 (bez uzycia liter)." << endl;
        return 1;
    }

    if (decimalNumber == 0) {
        cout << "Podana liczba w systemie o podstawie " << targetBase << ": 0" << endl;
        return 0;
    }

    long long result = 0;
    long long powerOf10 = 1;

    while (decimalNumber > 0) {
        int remainder = decimalNumber % targetBase;
        result += remainder * powerOf10;
        powerOf10 *= 10;
        decimalNumber /= targetBase;
    }

    cout << "Podana liczba w systemie o podstawie " << targetBase << ": " << result << endl;

    return 0;
}