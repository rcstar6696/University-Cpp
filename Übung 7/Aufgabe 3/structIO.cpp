#include <iostream>
#include <string>
using namespace std;


int main()

{
	struct Autotyp
	{
		string KFZModell;
		string Hersteller;
		unsigned int Baujahr;
		long Laufleistung;
		unsigned int Sitze;
	};
	Autotyp Auto1;

	cout << "Bitte gib das KFZ-Modell ein:";
	cin >> Auto1.KFZModell;

	cout << "Bitte gib den Hersteller ein:";
	cin >> Auto1.Hersteller;

	cout << "Bitte gib das Baujahr ein:";
	cin >> Auto1.Baujahr;

	cout << "Bitte gib die Laufleistung ein:";
	cin >> Auto1.Laufleistung;

	cout << "Bitte gib die Anzahl der Sitze ein: ";
	cin >> Auto1.Sitze;

	cout << "\n" << "Daten von Auto 1:" << endl;
	cout << "KFZ-Modell: " << Auto1.KFZModell << endl;
	cout << "Hersteller: " << Auto1.Hersteller << endl;
	cout << "Baujahr: " << Auto1.Baujahr << endl;
	cout << "Laufleistung in km: " << Auto1.Laufleistung << endl;
	cout << "Sitze im Auto: " << Auto1.Sitze << endl;

	system("PAUSE");
	return 0;
}
