#include <iostream>
#include <string>

using namespace std;


int main()
{

	float zahl;
	float zahlbetrag;
	string vorzeichen;

	cout << "Gib eine Zahl ein: ";								// Eingabe Zahl
	cin >> zahl;

	vorzeichen = (zahl > 0) ? "positiv" : "negativ";			// Fals Zahl groeﬂer 0 dann positiv sonst negativ
	cout << "Die eingegebene Zahl ist " << vorzeichen << endl;	// Ausgabe Vorzeichen

	zahlbetrag = (zahl > 0) ? zahl : zahl*(-1);					// Fals Zahl groeﬂer 0 dann zahl = zahlbetrag wenn kleiner zahl*(-1) = zahlbetrag
	cout << "Der absolute Betrag ist: " << zahlbetrag << endl;	// Ausgabe Betrag

	system("PAUSE");
	return 0;
}