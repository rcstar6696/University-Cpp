#include <iostream>
#include <string> 

using namespace std;

string helloWorld ()				 // Funktion Hello World
{

 string output = "Hello World";		 // Hello World in string Variable schreiben

 return output ;						 // Rückgabe von string

}

int main ()
{

 cout << helloWorld()<< endl;		 // Ausgabe von Rückgabe von helloWorld funktion
 system("Pause");

 return 0;

}