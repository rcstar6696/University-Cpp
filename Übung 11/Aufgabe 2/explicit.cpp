#include <iostream>
#include "explicit.h"
using namespace std;

int main ()
{
Moebel moebelstuck;
Schrank billy;

billy.printName();
moebelstuck.printName();
Moebel(5);

system ("PAUSE");
return 0;
}

int Moebel::printName()
{
cout << "Ich bin ein Moebel" << endl;
return 0;
}

int Schrank::printName()
{
cout << "Ich bin ein Schrank" << endl;
return 0;
}

Moebel::Moebel(int stuhl):Moebel()
{
cout << "Ich bin Moebel " << stuhl << endl;
}
