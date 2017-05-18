#include <iostream> 
using std::cout;
int main() {

	int i = 10;
	float x = 100.0;

	if (i == 1)
		x = 99.0;

	cout << "i " << i << "\n";
	cout << "x " << x;

	system("PAUSE"); 
	return 0;
}

/*

Fehlerbeschreibung:

Der Fehler lag darin, dass in der if-Abfrage [ if (i = 1) ] die Variable i mit dem Wert 1 überschrieben wurde. 
Um den Fehler zu beheben musste die if-Abfrage so verändert werden, sodass nun geprüft wird ob die Variable i 
aktuell den Wert 1 hat. [if (i == 1) ]
Der Fehler war also die Anzahl der Gleichzeichen in der if-Abfrage

*/