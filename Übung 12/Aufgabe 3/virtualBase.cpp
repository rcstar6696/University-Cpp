#include <iostream>
#include <string>
#include "A.h"
#include "B.h"
#include "C.h"
#include "D.h"

using namespace std;

int main()
{
	D Basis;

	Basis.baseFunc();
	system("PAUSE");
	return 0;

}

/*
Fehler ohne virtuelle Verebung:
	""D::baseFunc"" ist mehrdeutig
	Fehler	C2385	Mehrdeutiger Zugriff von "baseFunc".

	Die Fehler kommen Zustande, die Klassen B und C jeweils von A erben und somit erben beide die Funktion basefunc().
	Da D wiederrum von den Klassen B und C erbt, erbt die Klasse D zweimal die Funktion basefunc(), einmal von der Klasse B und einmal von C.
	hierbei handelt sich um eine mehrfachverebung B und C erben jeweils von A und D von B und C. 
	Die Kollison bzw. die Mehrdeutigkeit von der Funktion kommt also durch die doppelte Vererbung der basefunc() (hier bei beiden Klassen B und C die gleiche Funktion) 
	über zwei unterschiedlichen Wegen. Das Problem kann behoben werden indem die Klassen B und C virtuell von der Klasse A erben. 
	Dies tut man in dem man in der Vererbung ein virtual vor die Klasse schreibt vn der geerbet werden soll. Beispielsweise so:

	vorher:class B :public  A 

	nachher: class B :public virtual A 


*/