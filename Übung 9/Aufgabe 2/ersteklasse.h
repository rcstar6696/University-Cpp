# include <string>
using namespace std ;

class Student {
    
protected:
string Vorname;
string Nachname;
unsigned int Matrikelnr;

public:
    Student();
    Student(string pa_Vorname, string pa_Nachname, unsigned int pa_Matrikelnr);
    
    void setVorname(string Vorname);
    string getVorname ();
    
    void setNachname(string Nachname);
    string getNachname ();
    
    void setMatnr(unsigned int Matrikelnr);
    unsigned int getMatnr ();
     
 };