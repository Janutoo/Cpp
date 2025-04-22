# Projekty Programistyczne z Liceum - Język C++

Ten zbiór projektów zawiera programy napisane w języku C++ w ramach zajęć w liceum. Każdy projekt ilustruje różne koncepcje programistyczne i algorytmiczne.

## Lista Projektów

* **caesar\_cipher.cpp:** Implementacja szyfru Cezara, prostej metody szyfrowania polegającej na przesunięciu każdej litery tekstu jawnego o stałą liczbę pozycji w alfabecie.
* **decimal\_converter.cpp:** Program do konwersji liczb między różnymi systemami liczbowymi (np. dziesiętnym, binarnym, szesnastkowym).
* **fraction\_operations.cpp:** Implementacja podstawowych operacji arytmetycznych na ułamkach (dodawanie, odejmowanie, mnożenie, dzielenie).
* **merge\_sort\_algorithm.cpp:** Implementacja algorytmu sortowania przez scalanie (Merge Sort), wydajnej metody sortowania opartej na strategii "dziel i zwyciężaj".
* **palindrome\_checker.cpp:** Program sprawdzający, czy podane słowo, fraza lub liczba jest palindromem (czyta się tak samo od przodu i od tyłu).
* **prime\_check\_related.cpp:** Zbiór funkcji lub programów związanych ze sprawdzaniem własności liczb pierwszych, takich jak testowanie pierwszości lub generowanie liczb pierwszych.
* **prime\_checker.cpp:** Program, który determinuje, czy podana liczba jest liczbą pierwszą.
* **prime\_test.cpp:** Prawdopodobnie inny wariant programu do testowania pierwszości liczb lub zestaw testów sprawdzających działanie algorytmu sprawdzania liczb pierwszych.
* **quadratic\_roots.cpp:** Program obliczający pierwiastki rzeczywiste i zespolone równania kwadratowego w postaci $ax^2 + bx + c = 0$.
* **random\_array\_sum.cpp:** Program, który tworzy tablicę wypełnioną losowymi liczbami i oblicza sumę jej elementów.
* **randomize\_sort\_and\_merge.cpp:** Program, który demonstruje losowanie elementów do tablic, sortowanie tych tablic (prawdopodobnie przy użyciu sortowania bąbelkowego lub innego prostego algorytmu) oraz scalanie dwóch posortowanych tablic w jedną.
* **star\_triangle.cpp:** Program rysujący na ekranie różne wzory trójkątów złożonych ze znaków gwiazdki (`*`) na podstawie danych wejściowych (np. rozmiaru, typu trójkąta).
* **temperature\_analysis.cpp:** Program do analizowania danych dotyczących temperatury, potencjalnie obliczający statystyki takie jak średnia, minimum, maksimum temperatur z danego zestawu danych.
* **train\_cargo\_query.cpp:** Program do zarządzania informacjami o pociągach i ich ładunkach, umożliwiający wyszukiwanie, filtrowanie lub wyświetlanie informacji na podstawie określonych kryteriów.

## Struktura Projektu

Każdy projekt znajduje się w osobnym pliku źródłowym C++ (`.cpp`). Pliki te zawierają implementację opisanego problemu programistycznego.

## Jak Używać

Aby skompilować i uruchomić te programy, będziesz potrzebować kompilatora języka C++ (np. g++).

1.  **Otwórz terminal lub wiersz poleceń.**
2.  **Przejdź do katalogu zawierającego pliki `.cpp`.**
3.  **Skompiluj wybrany plik używając kompilatora g++:**
    ```bash
    g++ nazwa_pliku.cpp -o nazwa_wykonywalnego
    ```
    Przykład dla `caesar_cipher.cpp`:
    ```bash
    g++ caesar_cipher.cpp -o caesar_cipher
    ```
4.  **Uruchom skompilowany program:**
    ```bash
    ./nazwa_wykonywalnego
    ```
    Przykład:
    ```bash
    ./caesar_cipher
    ```
5.  **Postępuj zgodnie z instrukcjami wyświetlanymi przez program (jeśli są wymagane).**

## Dodatkowe Informacje

Te projekty stanowią zapis moich pierwszych doświadczeń z programowaniem w języku C++ w trakcie nauki w szkole średniej. Każdy z nich pomógł mi w zrozumieniu podstawowych i bardziej zaawansowanych koncepcji programistycznych.

---