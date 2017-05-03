// input.cpp Enter a string and see it printed on screen

#include <iostream> // required for cin/ cout

using std::cout;
using std::cin;
using std::endl;

// start of main function
int main()
{
 // define input as an integer variable
 int input;

 // print a text on screen
 cout << " Enter a integer number : ";

 // get keyboard input from user
 cin >> input;

 // print value of input on screen
 cout << " You entered " << input << endl;

 system("PAUSE");
 return 0;
}

// Insert solution behind this line using comments

/*
Eingabe: 5
5 ist eine Integer Zahl und somit zeigt die Konsole auch an "You entered 5 "
*/

/*
Eingabe: 5.5
5.5 ist keine Integer Zahl sondern eine float Zahl und somit zeigt die Konsole auch falsches an,
nämlich "You entered 5" dies kommt daher da das Program die eingebene Zahl in eine Integer Variable schreibt 
und dabei die Zahlen nach dem Komma eliminiert.
*/

/*
Eingabe: Fuenf
Fuenf ist keine Integer Zahl sondern ein string und somit zeigt die Konsole auch falsches an,
nämlich "You entered -858993460" dies kommt daher da das Program die eingebene Buchstaben in eine Integer Variable schreibt
und dabei versucht die Buchstaben in Zahlen konvertiert aber fehlschlägt.
*/

/*
Eingabe: 102030405060708090102030405060708090
102030405060708090102030405060708090 ist eine Integer Zahl aber eine zu große Integer Zahl (Maximum ist 4294967296) und somit zeigt die Konsole auch falsches an,
nämlich "You entered -858993460" dies kommt daher das das Program die eingebene Zahl in eine Integer Variable schreibt
und dabei feststellt das die Zahl zu groß ist und deshalb einen Falschen Wert ausgibt.
*/
