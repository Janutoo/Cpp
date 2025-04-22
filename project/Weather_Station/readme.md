# Projekt Szkolnej Stacji Pogodowej opartej na ESP32

Ten projekt implementuje prostą stację pogodową opartą na module ESP32. Wykorzystuje czujnik DHT11 do odczytu temperatury i wilgotności, a także wyświetla statyczne dane dotyczące ciśnienia i opadów deszczu. Dane te są udostępniane poprzez prostą stronę internetową hostowaną przez ESP32.

## Funkcjonalności

* **Odczyt temperatury:** Wyświetla aktualną temperaturę w stopniach Celsjusza (°C) odczytaną z czujnika DHT11.
* **Odczyt wilgotności:** Wyświetla aktualną wilgotność powietrza w procentach (%) odczytaną z czujnika DHT11.
* **Statyczne dane:** Prezentuje statyczne wartości dla ciśnienia (1008.00 hPa) i opadów deszczu (0.00 mm).
* **Interfejs WWW:** Udostępnia odczyty i statystyki poprzez prostą stronę internetową odświeżaną co 4 sekundy.
* **Łatwa konfiguracja Wi-Fi:** Wymaga jedynie podania nazwy sieci Wi-Fi (SSID) i hasła w kodzie.
* **Obsługa MDNS:** Umożliwia dostęp do strony internetowej stacji pogodowej poprzez nazwę hosta `esp32.local` (jeśli router obsługuje MDNS).

## Wymagane biblioteki

Projekt korzysta z następujących bibliotek Arduino:

* `WiFi.h`: Do obsługi połączenia Wi-Fi.
* `WiFiClient.h`: Do tworzenia klientów sieciowych.
* `WebServer.h`: Do hostowania serwera WWW na ESP32.
* `ESPmDNS.h`: Do obsługi Multicast DNS (MDNS).
* `DHT.h`: Do obsługi czujników temperatury i wilgotności DHT (w tym przypadku DHT11).

**Przed kompilacją upewnij się, że masz zainstalowane te biblioteki w swoim środowisku Arduino IDE.** Możesz je zainstalować za pomocą Menadżera Bibliotek (Sketch > Include Library > Manage Libraries...). Wyszukaj i zainstaluj odpowiednie biblioteki.

## Konfiguracja

1.  **Otwórz kod w Arduino IDE.**
2.  **Znajdź następujące linie:**
    ```cpp
    const char *ssid = "********";
    const char *password = "********";
    ```
3.  **Zastąp `"********"` nazwą swojej sieci Wi-Fi (SSID) i hasłem do niej.**
4.  **Upewnij się, że czujnik DHT11 jest podłączony do pinu GPIO26 ESP32.** Jeśli używasz innego pinu, zmień definicję w kodzie:
    ```cpp
    DHT dht(26, DHT11); // Zmień '26' na numer używanego pinu
    ```

## Instalacja i uruchomienie

1.  **Podłącz moduł ESP32 do komputera za pomocą kabla USB.**
2.  **W Arduino IDE wybierz odpowiednią płytkę ESP32 (np. "ESP32 Dev Module") oraz port COM, do którego jest podłączony moduł.**
3.  **Wgraj kod na ESP32 (Sketch > Upload).**
4.  **Po pomyślnym wgraniu otwórz Monitor Portu szeregowego (Tools > Serial Monitor) z prędkością transmisji 115200 bps.**
5.  **Sprawdź w Monitorze Portu szeregowego, czy ESP32 połączył się z Twoją siecią Wi-Fi i jaki adres IP został mu przypisany.** Powinien pojawić się komunikat podobny do:
    ```
    Connected to [Twoja nazwa sieci Wi-Fi]
    IP address: 192.168.1.XXX
    ```
6.  **Otwórz przeglądarkę internetową na urządzeniu podłączonym do tej samej sieci Wi-Fi.**
7.  **W pasku adresu przeglądarki wpisz adres IP wyświetlony w Monitorze Portu szeregowego.** Możesz również spróbować wpisać `http://esp32.local/` jeśli Twój router obsługuje MDNS.
8.  **Powinna pojawić się strona internetowa z aktualnymi odczytami temperatury i wilgotności oraz statycznymi danymi.** Strona będzie się automatycznie odświeżać co 4 sekundy.

## Uwagi

* Ten projekt jest prostą implementacją stacji pogodowej i wyświetla statyczne wartości ciśnienia i opadów deszczu. Aby uzyskać rzeczywiste dane dotyczące ciśnienia i opadów, należy zintegrować odpowiednie czujniki i zmodyfikować kod.
* Częstotliwość odczytu z czujnika DHT11 jest ograniczona. Zbyt częste odczyty mogą powodować nieprawidłowe dane.
* Strona internetowa jest bardzo prosta i może zostać rozbudowana o dodatkowe funkcjonalności i lepszy wygląd.
* Upewnij się, że Twoja sieć Wi-Fi ma stabilne połączenie.

## Możliwe rozszerzenia

* Dodanie obsługi czujnika ciśnienia atmosferycznego (np. BMP180, BMP280).
* Dodanie obsługi czujnika opadów deszczu.
* Zapisywanie danych do bazy danych (np. InfluxDB) lub platformy IoT (np. ThingSpeak).
* Wyświetlanie danych na wyświetlaczu LCD lub OLED podłączonym do ESP32.
* Implementacja bardziej zaawansowanego interfejsu WWW z wykresami i historią danych.
* Możliwość konfiguracji sieci Wi-Fi poprzez stronę internetową (Access Point Mode).