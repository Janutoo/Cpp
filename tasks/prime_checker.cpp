#include <iostream>

using namespace std;

int main() {
    cout << "Program sprawdza czy podana liczba jest pierwsza!" << endl;
    cout << "Podaj liczbe: ";
    int n;
    cin >> n;

    if (n <= 1) {
        cout << "Podana liczba nie jest pierwsza." << endl;
        return 0;
    }

    if (n <= 3) {
        cout << "Podana liczba jest pierwsza." << endl;
        return 0;
    }

    if (n % 2 == 0) {
        cout << "Podana liczba nie jest pierwsza." << endl;
        return 0;
    }

    for (int d = 3; d * d <= n; d = d + 2) {
        if (n % d == 0) {
            cout << "Podana liczba nie jest pierwsza." << endl;
            return 0;
        }
    }

    cout << "Podana liczba jest pierwsza." << endl;

    return 0;
}