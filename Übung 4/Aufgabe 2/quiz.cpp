#include <iostream>
#include <string> 

using namespace std;

char question (string frage, string a ,string b,string c,string d)			// Funktion question mit Übergabevariablen
{
    cout << frage <<endl;													// Ausgabe von Frage (erste Übergabe Variable)
    cout << "#############################################" <<endl;
    
    cout << "a: " << a <<endl;												// Ausgabe von Möglichkeit a 
    cout << "b: " << b <<endl;												// Ausgabe von Möglichkeit b 
    cout << "c: " << c <<endl;												// Ausgabe von Möglichkeit c 
    cout << "d: " << d <<endl;												// Ausgabe von Möglichkeit d 
    
    cout << "#############################################" <<endl;
    
    char answer;															// Antwort definiern
    cin >> answer ;															// Eingabe Antwort
    return answer;															// Rückgabe von Antwort
}


int main ()
{
 char answer1 = question ("Frische Blätter sind meist","Rot","Blau","Gruen", "Schwarz");

 char answer2 = question ("Am Ende der Pruefung wichtig ist das", "Exsitenz", "Bestehen", "Persistenz", "Vorkommen");
    
	if (answer1 == 'c' && answer2 == 'b'){
		    cout << "Alles Richtig!"<< endl;	
				}
	else {
        cout << "Da war was falsch!" << endl;
			}
    
 system("Pause");
 return 0;
}