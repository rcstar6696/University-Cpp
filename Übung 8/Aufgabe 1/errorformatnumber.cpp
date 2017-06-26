# include <iostream>
using std :: cout ;
using std :: cin ;
using std :: endl ;

int ToPercent ( float decimal ) ;

int main () {
int a , b ;
float c ;
int cAsPercent ;
cout << " Enter two integers > ";
cin >> a >> b ;

if ( a == b ) cout << " They are equal !\n";
else if ( a > b ) cout << "The first one is bigger !\n";
else cout << "The second one is bigger !\n";

cout << " Enter a decimal to be converted to percent > ";
cin >> c ;
cAsPercent = ToPercent ( c ) ;
cout << " That's " << cAsPercent << "%\n";
cout << endl << endl ;
system ("PAUSE");
return 0;
}

/* ToPercent ():
Converts a given float (eg 0.9) to a percentage (90) .
*/

int ToPercent ( float decimal ) {
int result ;
result =  decimal * 100; 

/* 
Hier wurde die Typumwandlung von decimal in eine integer vaiable entfernt,
da die Übergabezahl decimal eine Kommazahl ist und diese zur korrekten Berechung des Protenzsatzes nötig ist.
Eine integer variable kann hingegen keine KOmmazahl speichern und somit ist der Datentyp ungeeignet.
*/

return result ;
}
