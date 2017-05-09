#include <iostream>
#include <string> 

using namespace std;

int main()
{
	// Variablen Deklaration
	unsigned short int AnzahlLaenderEuropa = 47;
	char zweiterBuchstabeNachname = 'e';
	float Temperatur = -273.15; // kälteste Temperatur
	string Nachname = "Weffers";
	int Nenner = 2;
	unsigned short int Alter = 20;	
	float FlaecheHessen = 21114.9; // Km^2
	long long SchuldenDE = 2006740350095; // Stand 9.5.2017
	bool Lichtschalter = true;

	// Ausgabe
	cout << "Europa besteht aus " << AnzahlLaenderEuropa << " Laendern" << "." << endl;
	cout << "Der zweite Buchstabe meines Nachnamens ist ein " << zweiterBuchstabeNachname << "." << endl;
	cout << "Die kaelteste je gemessene Temperatur ist " << Temperatur << " Kelvin." << endl;
	cout << "Mein Nachname ist " << Nachname << "." << endl;
	cout << "Der Nenner des Bruchs ist " << Nenner << "." << endl;
	cout << "Ich bin " << Alter << " Jahre alt." << endl;
	cout << "Hessen ist " << FlaecheHessen << " Quadratkilometer gross" << "." << endl;
	cout << "Deutschlandsschulden lagen am 9.5.2017 bei " << SchuldenDE << " Euro." << endl;
	cout << "Der Lichtschalter Zustand ist gerade bei " << Lichtschalter << "." << endl;

	system("Pause");
return 0;
}

/*
Wertebereich Datentypen

char:					1Byte    Min: -128					Max: 127 bzw ein Zeichen 
unsigned short int:		2Byte	 Min:  0					Max: 65535
long int:				4Byte    Min: –2147483647			Max: –2147483647
float:					4Byte    Min: -3.40282e+38			Max: 3.40282e+38
int:					4Byte    Min: -2147483648			Max: 2147483647  32Bit System
string:					besitz keinen Wertbereich
bool:					1Byte    Min: false					Max: true
long long:				8Byte    Min: -9223372036854775808  Max: 9223372036854775807
*/