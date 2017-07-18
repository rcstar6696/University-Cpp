#include <iostream>
#include <time.h>
#include <string>

using namespace std;

template<typename number>
number moreBeautiful(number a, number b) 
{
	return rand() % 2 == 0 ? a : b;
}

int main()
{	
srand(time(NULL));

int v1;
int v2;
float v3;
float v4;
string v5;
string v6;

// -------------------------------------------------
cout << "Gib die erste integer-Zahl ein: ";
cin >> v1;
cout << "Gib die zweite integer-Zahl ein: ";
cin >> v2;
cout << "-------------------------------------------------" << endl;
cout << "Der erste Zufallsgenerator sagt: " << moreBeautiful(v1, v2) << "\n" << endl;

// -------------------------------------------------
cout << "Gib die erste float-Zahl ein: ";
cin >> v3;
cout << "Gib die zweite float-Zahl ein: ";
cin >> v4;
cout << "-------------------------------------------------" << endl;
cout << "Der zweite Zufallsgenerator sagt: " << moreBeautiful(v3, v4) << "\n" << endl;
// -------------------------------------------------

cout << "Gib den ersten string ein: ";
cin >> v5;
cout << "Gib den zweiten string ein: ";
cin >> v6;
cout << "-------------------------------------------------" << endl;
cout << "Der letze Zufallsgenerator sagt: " << moreBeautiful(v5, v6) << "\n" << endl;

// -------------------------------------------------
system("PAUSE");
return 0;
}