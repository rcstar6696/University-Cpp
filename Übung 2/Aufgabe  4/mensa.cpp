#include <iostream>

using namespace std;

int main()
{
	// Variablen
	const  float GuenstigPreis = 1.80; // günstiges Essen
	const  float TeuerPreis = 5.00; // teures Essen 
	
	int MatrikelNr;
	
	float Geld; // Geld von Student
	
	float AnzahlWochenGuenstig; 
	float AnzahlWochenTeuer;
	
	// Print Text
	cout << "Herzlich Willkommen." << endl;
	cout << "Bitte geben sie ihre Matrikelnummer ein: ";

	// Eingabe Matrikelnummer
	cin >> MatrikelNr;

	// Eingabe Geld
	cout << "Bitte geben sie ein wie viel Geld aktuell vorhanden ist: ";
	cin >> Geld;

	// Berechnung Wochen 
	AnzahlWochenGuenstig = Geld / (5 * GuenstigPreis);
	AnzahlWochenTeuer = Geld / (5 * TeuerPreis);

	// Ausgabe von Matrikelnummer und vorhandem Geld
	cout << "Der Student mit der Matrikelnummer " << MatrikelNr << " besitzt " << Geld << " Euro fuer Mittagessen." << endl;

	if (AnzahlWochenGuenstig == 1) // Wenn Wochen = 1 dann Woche anstatt Wochen 
		cout << "Wird immer das guenstigste Essen gewaehlt, reicht das Geld "<< AnzahlWochenGuenstig << " Woche." << endl;
	else
		cout << "Wird immer das guenstigste Essen gewaehlt, reicht das Geld " << AnzahlWochenGuenstig << " Wochen." << endl;

	if (AnzahlWochenTeuer == 1) // Wenn Wochen = 1 dann Woche anstatt Wochen 
		cout << "Wird immer das teuerste Essen gewaehlt, reicht das Geld " << AnzahlWochenTeuer << " Woche." << endl;
	else
		cout << "Wird immer das teuerste Essen gewaehlt, reicht das Geld " << AnzahlWochenTeuer << " Wochen." << endl;

	system("PAUSE");

return 0;
}