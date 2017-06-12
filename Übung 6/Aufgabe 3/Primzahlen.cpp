#include <iostream>
#include <string>

using namespace std;

bool primtest(int zahl) // Primzahltest
{
	int anzahlteiler = 0; // Anzahl der Teiler 
	for (int teiler = 1; teiler <= zahl; teiler++) // Start teiler = 1 Ende Teiler = zahl und Teiler wird um 1 erhöht 
	{
		if (zahl%teiler == 0)   // Wenn Zahl durch Teiler keinen Rest 
		{
			anzahlteiler++;		// inkrement anzahlteiler
			if (anzahlteiler > 2)	// Beende Schleife wenn mehr als 2 Teiler gefunden
				break;
		}
	}
	
	if (anzahlteiler == 2)			// Genau zwei Teiler dann Primzahl
		return 1;
	else
		return 0;					// mehr als zwei Teiler dann keine Primzahl
}

int main()
{
	int minzahl = 1; // Startzahl
	int maxzahl = 100000; //10000,100000 Endzahl

	for (int zahl = minzahl; zahl <= maxzahl; zahl++)	// Start bei minzahl ende bei maxzahl und zahl wird um 1 inkrementiert
	{
		if (primtest(zahl) == 1)						// Abfrage von Funktion ob Primzahl oder keine Primzahl 
			cout << "Die Zahl " << zahl << " ist eine Primzahl " << endl;		// Ausgabe Primzahl
	}
	system("PAUSE");
	return 0;
}

/*

Die Berechung der Primzahlen ist eine aufwendige Rechnung und benötigt deshalb Zeit 
Schaut man sich die Primzahlen bis 1000 an werden diese innerhalb von ca. 1-2 Sekunden brechnet,
dabei ist die Anzhal der Primzaheln noch überschaubar. 
Versucht man nun die Primzahlen bis 10000 zu finden dauert dies schon länger (ca.3-4 Sekunden)
Lässt man sich die Primzahlen bis 100000 ausgeben wird die Menge der Zahlen immer größer und auch die Zeit erheblich länger (ca. 15 Sekunden).
Betrachtet man das genauer liegt dies daran das der Computer jede Zahl immer wieder durch Zahlen teilt solange die Zahl kleiner bzw. gleich der Teiler ist.
als Beispiel bei 997 prüft das Programm 997 mal ob die Divsion von Zahl und Teiler einen Rest hat. 
Jede mathematische Rechnung benötigt eine gewisse Zeit und diese summiert sich dann immer mehr.  

*/