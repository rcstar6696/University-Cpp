#include <iostream>
#include <string> 

using namespace std;

int main()
{
	// Variablen
	string name;

	// Ausgabe Bild  
	cout << "    " <<	"  XXXX   XXXX "	<< endl;
	cout << "    " <<	" XXXXXX XXXXXX"	<< endl;
	cout << "    " <<	"XXXXXXXXXXXXXXX"	<< endl;
	cout << "    " <<	"XXXXXXXXXXXXXXX"	<< endl;
	cout << "    " <<	" XXXXXXXXXXXXX"	<< endl;
	cout << "    " <<	"  XXXXXXXXXXX"		<< endl;
	cout << "    " <<	"    XXXXXX"		<< endl;
	cout << "    " <<	"      XX"			<< endl;

	// Ausgabe Leerzeilen
	cout <<  endl;
	cout <<  endl;

	// Ausgabe Text
	cout << "Herz-lich Willkommen. Wie heisst du?" << endl;

	// Eingabe Name 
	cin >> name;

	// Ausgabe Name mit extra Text
	cout << "Hallo " << name << " schoen dich kennengelernt zu haben" << endl;

	// Ende
	cout << "PROGRAMMENDE" << endl;

system("PAUSE");

return 0;
}