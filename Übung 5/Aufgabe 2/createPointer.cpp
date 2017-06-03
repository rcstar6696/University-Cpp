#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Definiere Input Variablen
	int inputint;
	int *pointer_int = &inputint;
	float inputfloat;
	float *pointer_float = &inputfloat;
	bool inputbool;
	bool *pointer_bool = &inputbool;
	char inputchar;
	char *pointer_char = &inputchar;


	// integer Input 
	cout << " Eingabe von integer Variable: ";
	cin >> inputint;

	// float Input
	cout << " Eingabe von float Variable: ";
	cin >> inputfloat;

	// bool Input
	cout << " Eingabe von bool Variable: ";
	cin >> inputbool;

	// char Input
	cout << " Eingabe von char Variable: ";
	cin >> inputchar;

	// Output Pionter Adressen
	cout << "\n" << " Pointer Adresse fuer int:  " << pointer_int << endl;
	cout << " Pointer Adresse fuer float:  " << pointer_float << endl;
	cout << " Pointer Adresse fuer bool:   " << pointer_bool << endl;
	cout << " Pointer Adresse fuer char: " << pointer_char << endl;

	system("PAUSE");
	return 0;
}

/*

 Die Pointer-Ausgabe gibt die Adresse der jeweiligen Variable aus welche vorher an den Pointer übergeben wurde.
 Der Pointer ist dabei eine Art Zeiger der immer auf eine Variable zeigt. In ihm wird dabei die Adresse der Variable gespeichert,
 welche je nach Codesytax ausgeben werden kann,aber auch die Variable auf die er zeigt kann ausgeben werden. 
 Hier ist es allerdings die Adresse.

*/
