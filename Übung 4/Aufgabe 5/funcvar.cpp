# include <iostream>
using namespace std ;

int a =0;

int seta ()
{
a=1;
return 0;
}

 int myfunc ()
 {
 seta ();
 cout << a ;
 return 0;
 }

int main ()
 {
 myfunc ();
 system ("PAUSE");
 return 0;
 }

/*

Fehler in Zeile 14 korrigiert vorher: seta ;Nach Änderung  seta ();Da in Zeile 14 eine Funktion aufgerufen werden muss und eine Funktion nur aufgerufen werdenkann durch den Syntax "Funtionsname ();"müssen hier die Klammern hinzugefügt werden. Ohne diese wird der Text seta als integer-Variable übernommen.  
*/