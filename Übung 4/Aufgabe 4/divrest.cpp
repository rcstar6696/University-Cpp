
#include <iostream>
#include <string>

using namespace std;

int divRest( int dividend, int divisor)				// Funktion divRest mit Übergabe von Dividend und Divisor
{
    int divisionRest;								// Rest als int deklarieren
    divisionRest = dividend%divisor;				// Berechung von Rest
    
    return divisionRest;
}

int main()
{
int zahl1;			// Initialisierung Zahl 1
int zahl2;			// Initialisierung Zahl 2
    
cout << "Geben sie den Dividend ein als Ganze Zahl:";  
cin >> zahl1;												// Eingabe Ganze Zahl (1)

cout << "Geben sie den Dividend ein als Ganze Zahl:";
cin >> zahl2;												// Eingabe Ganze Zahl (2)


cout <<  "Der Rest der Divison von " << zahl1 << " durch " << zahl2 << " ist " << divRest(zahl1,zahl2) << "." << endl;	
// Ausgabe von Berechung und den Rest der gestellten Aufgabe  
    
        
system("PAUSE");
return 0;
}

