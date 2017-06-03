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
 cin >> *pointer_int;
    
 // float Input
 cout << " Eingabe von float Variable: ";
 cin >> *pointer_float;

 // bool Input
 cout << " Eingabe von bool Variable: ";
 cin >> *pointer_bool;
    
 // char Input
 cout << " Eingabe von char Variable: ";
 cin >> *pointer_char;

 // pointer_int=NULL;
 // pointer_float=NULL;
 // pointer_bool=NULL;
 // pointer_char=NULL;   
    
 // Output von Variablen
 cout << "\n" << " Pointer Variable fuer int:  " << *pointer_int  << endl;
 cout << " Pointer Variable fuer float:  " << *pointer_float << endl;
 cout << " Pointer Variable fuer bool:   " << *pointer_bool << endl;
 cout << " Pointer Variable fuer char: " << *pointer_char << endl;   
    
    
 system("PAUSE");
 return 0;
}

/*

Werden die Pointer bzw. deren Adressen auf NULL gesetzt 
und versucht auf sie zuzugreifen gibt es eine Zugriffsrechtsverletztung auf dem Speicher des PCs. 
Das Betriebssystem schützt gewisse Sektoren und nun wird versucht auf diese zuzugreifen und genau deshalb
gibt Windows eine Fehlermeldung aus. Und zwar die Fehlermeldung:

Ausgelöste Ausnahme: Lesezugriffsverletzung

"pointer_int" war "nullptr".

*/

