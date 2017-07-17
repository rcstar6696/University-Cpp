#include <iostream>
#include "Virtual.h"
using namespace std;

/**

\author Max Weffers
\date 11.07.2017
\brief Programm zur Vererbung in Klassen und virtuelle Funktionen 

*/

int main ()
{
Schrank billy;
Stuhl ingolf;

Moebel *m;
m = &billy ;
m -> printName();

m = &ingolf ;
m -> printName();

system ("PAUSE");
return 0;
}

int Moebel::printName()
{
	return 0;
}

int Schrank::printName()
{
 cout << "Ich bin Billy" << endl;
 return 0;   
}

int Stuhl::printName()
{
 cout << "Ich bin Ingolf" << endl;
 return 0;   
}
