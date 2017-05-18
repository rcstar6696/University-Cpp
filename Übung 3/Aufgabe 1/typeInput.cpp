#include <iostream>
#include <string>

using namespace std;

/*!

In der main-funktion werden  zuerst die verschiedenen Inputvariablen deklariert
(string, bool, long und double). Nun gibt es eine ausgabe die den Nutzer auffordert einen Wert in die verschiedenen Variablen zu schreiben.
Diese geschieht hintereinander mit jedem der genannten Dateitypen. 
Zum Schluss gibt es eine Ausgabe der getaetigten Eingabe zu jedem Datentyp.

\author Max Weffers
\date 16.05.2017
\brief Programm zur Ein- und Ausgabe von eingebenen Werten der verschiedenen Datentypen

*/

// Start der main-Funktion
int main()
{
	// definiere Input Variablen
	string inputstring;
	bool inputbool;
	long inputlong;
	double inputdouble;

	// string Input 
	cout << " Enter a string: ";
	cin >> inputstring;		// Warte auf Eingabe vom User

	// bool Input
	cout << " Enter a bool: ";
	cin >> inputbool;		// Warte auf Eingabe vom User

	// long Input
	cout << " Enter a long number: ";
	cin >> inputlong;		// Warte auf Eingabe vom User

	// double Input
	cout << " Enter a double number: ";
	cin >> inputdouble;		// Warte auf Eingabe vom User

	// Ausgabe von eingebenen Werten
	cout << "\n" << " You entered  " << inputstring << " as string" << endl;
	cout << " You entered  " << inputbool << " as bool" << endl;
	cout << " You entered  " << inputlong << " as long" << endl;
	cout << " You entered  " << inputdouble << " as double" << endl;

	system("PAUSE");
	return 0;
}
