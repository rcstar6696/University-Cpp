#include <iostream>
#include <string>
using namespace std;


int main()

{
	long neuLaufleistung;
	struct Autotyp
	{
		string KFZModell;
		string Hersteller;
		unsigned int Baujahr;
		long Laufleistung;
		unsigned int Sitze;
	};
	Autotyp Auto1[24];

	cout << "Bitte gib die Laufleistung ein: ";
	cin >> Auto1[14].Laufleistung;

	neuLaufleistung = Auto1[14].Laufleistung + 1500;
	cout << "Neue Laufleistung in km: " << neuLaufleistung << endl;

	system("PAUSE");
	return 0;
}
