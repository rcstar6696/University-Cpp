#include <iostream>
#include <string>

using namespace std;

// Start der main-Funktion
int main()
{
	// definiere Variablen für Limits und die Ausgabe-Zahl
	int untergrenze;
	int obergrenze;
	int zahl = 0;

	// Input: Eingabe Untergrenze
	cout << "Bitte gib die Untergrenze ein: ";
	cin >> untergrenze;

	// Falls Limits nicht Ok dann Fehlermeldung
	if (untergrenze < 1 || untergrenze >10000)
	{
		// Error: Ausserhalb des Zahlenbereichs oder fehlerhafte bzw. unlogische Eingabe von Grenzen 
		cout << "Die eingebene Zahl ist fehlerhaft";
		system("PAUSE");
		return 1; // Error ist 1 
	}

	cout << "Bitte gib die Obergrenze ein: ";
	cin >> obergrenze;

	// Falls Limits nicht Ok dann Fehlermeldung
	if (obergrenze < untergrenze || obergrenze >10000)
	{
		// Error: Ausserhalb des Zahlenbereichs oder fehlerhafte bzw. unlogische Eingabe von Grenzen 
		cout << "Die eigebene Zahl ist fehlerhaft";
		system("PAUSE");
		return 1; // Error ist 1 
	}
	zahl = untergrenze; // Setze Untergrenze als erstmögliche Zahl

	while (zahl <= obergrenze  && zahl >= untergrenze) 
	// Während die Zahl kleiner ist als die Obergrenze und größer als die Untergrenze in der Schleife bleiben und ungerade Zahlen ausgeben
	{
		// Filtern von ungeraden Zahlen
		if (zahl % 2 == 1)
			cout << zahl << "\t";	// Ausgabe: Nummer dann Tab und wieder Nummer 
		zahl = ++zahl;				// Inkrementire Zahl um 1
	}
	system("PAUSE");
	return 0;
}