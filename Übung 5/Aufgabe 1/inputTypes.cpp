#include <iostream>
#include <string>

using namespace std;

int main()
{
 // Definiere Input Variablen
 int inputint;
 float inputfloat;
 bool inputbool;
 char inputchar;

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

 // Output von Variablen
 cout << "\n" << " Ausgabe von integer Variable:  " << inputint  << endl;
 cout << " Ausgabe von float Variable: " << inputfloat << endl;
 cout << " Ausgabe von bool Variable:   " << inputbool << endl;
 cout << " Ausgabe von char Variable: " << inputchar << endl;

system("PAUSE");
return 0;
}

