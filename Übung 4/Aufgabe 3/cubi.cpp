#include <iostream>
#include <string> 

using namespace std;


double cubifunc (float x)						// Funktion cubifunc mit Übernahme von x wert aus main
{
double fkt;										// Rückgabevariable als double
fkt = x*x*x+42*x-7;								// Berechnung von Funktionswert mit x wert aus main
    
return fkt;										// Rückgabefunktionswert
}

int main ()
{
 float x_wert;									// x-Wert als Eingabewert
 int anzahl =0;									// Nummerierung von Werten x und fkt Werten
 
    
 for (x_wert = -15; x_wert<=15 ;x_wert+=0.1f)	// Schleife zwischen -15 und 15 in 0.1 Schritten durch Addition 
 {
 
 anzahl =anzahl+1;													// Nummerirung inkrementiern
 cout << anzahl << ". Parameter x = " << x_wert << endl;			// Ausgabe X Wert
 cout << anzahl << ". Funktionswert = " << cubifunc(x_wert)<< endl;	// Ausgabe Funktionswert
 cout << endl;
	}

 system("Pause");
 return 0;
}