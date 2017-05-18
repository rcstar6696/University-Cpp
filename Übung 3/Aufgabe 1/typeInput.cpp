#include <iostream>
#include <string>

using namespace std;

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
