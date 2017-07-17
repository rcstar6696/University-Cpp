#include <iostream>
#include <string>

/**
In diesem Programm geht es um die Vererbung im Berecih Klassen
Es wird von der Oberklasse Moebel public vererbt zu den Klassen Schrank und Stuhl
In jeder Klasse wird die Funktion printname genutzt welche in der Oberklasse virtuell definiert ist.
In dieser Funktion wird dann eine Ausgabe getätigt welche je nach aufruf der jeweiligen Klasse entscheidet was ausgegeben wird

\author Max Weffers
\date 11.07.2017
\brief Programm zur Vererbung in Klassen und virtuelle Funktionen

*/


class Moebel{
protected:

public:
virtual int printName()=0;    // virtuelle Funktion
};

class Schrank:public Moebel
{
protected:
    
public:
int printName();
};

class Stuhl:public Moebel
{
protected:
    
public:
int printName();

};