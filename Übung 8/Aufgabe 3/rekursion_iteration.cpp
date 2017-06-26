# include <iostream>
using namespace std;

int produktRek(int maxzahl, int summenzahl)
{ 
/*
Rekursion bei Zahl = 2:
Die Zahl 2 wurde als Maximalzahl an die Funktion ProduktRek übergeben gleichzeitig wird hier auch der Startwert der Aufsummierung 1 übergeben.
Zu erst wird überprüft ob die eingebene Zahl größer ist als die minimal geforderte Zahl 1 ist. 
Ist dies nicht der Fall also die Zahl kleiner als 1 oder negativ wird hier ein Fehler gemeldet 
Nun wird geprüft ob die berechnete Zahl gleich groß ist wie die maximale Zahl, allerdings trifft dies erst dann ein wenn die Funktion genau so oft 
aufgerufen wurde wie die Maximalzahl groß ist. Im normalen Fall also solange die Anzahl der Durchläufe (hier 2) und der Maximalzahl (hier 2 ) nicht gleich sind wird die
die Funktion erneut aufgerufen mit der neuen summenzahl (Summenzahl+1) und mit der alten Summenzahl (hier 1) aus dem vorherigen Durchlauf addiert. Dies wird so lange wiederholt bis die Anzähle der Durchläufe
der Maximalzahl enstpricht ausgeführt. Dort wird dann die Summenzahl zurückgeben und durch cout ausgegeben.    

*/
 if (maxzahl>=1)
 { 
 if (summenzahl == maxzahl) 
 return summenzahl;
 
 return summenzahl+produktRek (maxzahl,summenzahl+1);
 }    
 else
    return -1;     
}

int produktIt(int maxzahl)
{  
/*
Iterationm bei Zahl = 2:
Die Zahl 2 wird hier in die Funktion ProduktIt übergeben.
Zu erst wird überprüft ob die eingebene Zahl größer ist als die minimal geforderte zahl 1 ist. 
Ist dies nicht der Fall also die Zahl kleiner als 1 oder negativ wird hier ein Fehler gemeldet.
Nun wird eine neue Variable intialisiert welche die gesuchte Zahl der Summe wird (Summenzahl).
Im ersten Durchgang der for-Schleife wird nun der erste Summand mit der aktuellen Summenzahl addiert.
In jedem weitern Durchgang wird nun die vorherige Summenzahl mit dem neuen Summanden addiert.
Solange bis der Summand gleich der Maximalzahl ist (hier 2).     
*/

    if (maxzahl>=1)
 { 
    int zahlIt=0;
for (int summand=1;summand<=maxzahl;summand++)
        {
zahlIt=zahlIt+summand;
          }
    return zahlIt;
}
    else
    return -1;
}

int main ()
{
int zahl;
int summenzahl = 1;
int Rekursion;
int Iteration;

cout << "Gib die Maximalzahl ein: ";
cin >> zahl;

Rekursion = produktRek(zahl,summenzahl);
Iteration = produktIt(zahl);
    
cout << "Summe bei Rekursion: "<< Rekursion<< endl;
    
cout << "Summe bei Iteration: "<< Iteration<< endl;

    
 if (Rekursion==-1||Iteration==-1)
    cout <<"Berechnung fehlgeschlagen" << endl;    

 system("PAUSE");
 return 0;
} 
