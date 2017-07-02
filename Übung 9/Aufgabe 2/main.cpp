# include <iostream>
# include <string>
# include "ersteklasse.h"

using namespace std ;


int main () {
Student StudentA;    
cout << StudentA.getVorname() << endl;
cout << StudentA.getNachname() << endl;
cout << StudentA.getMatnr() << endl;

cout << endl;    
        
StudentA.setVorname("Max");
StudentA.setNachname ("Weffers");
StudentA.setMatnr(35025782);
    
cout << StudentA.getVorname() << endl;
cout << StudentA.getNachname()<< endl;
cout << StudentA.getMatnr()<< endl;
                    
cout << endl;
        
Student StudentB("Testvorname", "Testnachname",66666666);
               
cout << StudentB.getVorname() << endl;
cout << StudentB.getNachname()<< endl;
cout << StudentB.getMatnr()<< endl;
        
system ("PAUSE") ;
return 0;
}
