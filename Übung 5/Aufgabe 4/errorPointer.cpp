#include <iostream>

using namespace std;

int main() {

	int firstVar = 7;
	cout << "The first Value : " << firstVar << endl;
	int * pSecVar = &firstVar;
	*pSecVar = 8;
	cout << "The second value : " << *pSecVar << endl;
	return 0;
}

/*

Der Fehler lag darin das im Programm zuvor die Adresse des Pointers auf 8 gesetzt hat.
Eigentlich soll aber die Variable auf den Wert 8 gesetzt werden.
Dies wird dann getan wenn aus nur " psecVar " (Zeile 8) ein " *psecVar  " gemacht wird.

*/