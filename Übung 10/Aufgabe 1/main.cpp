# include <iostream>
# include "Sparschwein.h"
# include "BuntesSparschwein.h"
# include "SprechendesSparschwein.h"

int main () {

Sparschwein s1 (1.0f);
BuntesSparschwein s2 (2.0f , 35 ,35 ,35);
SprechendesSparschwein s3 (3.0f , "May the force be with you");


cout << " ---- Schwein 1 ----" << endl;
s1.einwerfen (5.0f);
s1.printGuthaben ();
cout << " ---- Schwein 2 ----" << endl;
s2.printColor () ;
cout << " ---- Schwein 3 ----" << endl;
s3.einwerfen (10.0f);
s3.sprich ();

Sparschwein s4 ;

cout << " ---- Schweineaddition ----" << endl ;
s4 = s1 + s2 ;
s1 . printGuthaben () ;
s2 . printGuthaben () ;
s4 . printGuthaben () ;
    
system ("PAUSE") ;
return 0;
 }