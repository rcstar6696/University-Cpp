#include <iostream>
#include <string>

using namespace std;

/*!

In der Main-Funktion werden zu erst die Variablen definiert fuer die obere und untere Grenze sowie die Ausgabezahl
Im ersten Schritt wird nach der Untergrenze gefragt und es wird gewartet bis der Nutzer eine Zahl zwischen 1 und 10000 eingibt.
Der zweite Schritt w�re die Eingabe einer Obergrenze.
Bei falscher oder nicht logischer Eingabe wird eine Fehlermeldung ausgeben (Fehlermeldung nach jedem Schritt moeglich).
Eine unlogische Eingabe waere eine obere Grenze die kleiner als die untere Grenze ist.
Nach Eingabe der Grenzen wird die Untergrenze als erstmoeglich Zahl definiert.
Ab diesem Schritt befindet sich das Programm in einer Schleife solange die Ausgabezahl innerhalb der Grenzen bleibt.
In der Schleife wird jede ungerade Zahl ausgeben und vorher ueber eine Divsion mit oder ohne Rest im Ergebnis bestimmt
Die Ausgabezahl wird dabei im  Schleifenkopf nach jedem Durchgang inkrementiert. Ist die Ausgabezahl ausserhalb der Grenze wird die Schleife beendet
und das Programm endet.

\author Max Weffers
\date 16.05.2017
\brief Programm zur Ausgabe von ungeraden Zahlen zwischen einer Ober- und Untergrenze

*/

// Start der main-Funktion
int main()
{
	// definiere Variablen f�r Limits und die Ausgabe-Zahl
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

	// Input: Eingabe Obergrenze
	cout << "Bitte gib die Obergrenze ein: ";
	cin >> obergrenze;

	// Falls Limits nicht Ok dann Fehlermeldung
	if (obergrenze < untergrenze || obergrenze >10000)
	{
		// Error: Ausserhalb des Zahlenbereichs oder fehlerhafte bzw. unlogische Eingabe von Grenzen 
		cout << "Die eigebene Zahl ist fehlerhaft.";
		system("PAUSE");
		return 1; // Error ist 1 
	}

	// Output: Ausgabe von allen ungeraden Zahlen solange die Zahl noch im begrenzenten Zahlenbereich liegt (Zahl wird im Schleifen Kopf inkrementiert)
	for (int zahl = untergrenze; zahl <= obergrenze; zahl = ++zahl)
	{
		// Filtern von ungeraden Zahlen
		if (zahl % 2 == 1)
			cout << zahl << "\t"; // Ausgabe: Nummer dann Tab und wieder Nummer 
	}

	system("PAUSE");
	return 0;
}
