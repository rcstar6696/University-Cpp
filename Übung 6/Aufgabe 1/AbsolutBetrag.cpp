#include <iostream>

using namespace std;


int main()
{

	float zahl;
	float zahlbetrag;

	cout << "Gib eine Zahl ein ! ";								// Eingabe Zahl
	cin >> zahl;

	zahlbetrag = (zahl > 0) ? zahl : zahl*(-1);					// Fals Zahl groe�er 0 dann zahl wenn kleiner zahl*(-1) 
	cout << "Der absolute Betrag ist: " << zahlbetrag << endl;	// Ausgabe Betrag
	system("PAUSE");
	return 0;
}