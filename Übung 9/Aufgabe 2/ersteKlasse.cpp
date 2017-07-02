# include <string>
# include "ersteklasse.h"

using namespace std;

Student::Student()
{
Vorname = "Max";
Nachname = "Mustermann";
Matrikelnr = 12345678 ;
}

Student::Student(string pa_Vorname, string pa_Nachname, unsigned int pa_Matrikelnr)
{
Vorname = pa_Vorname;
Nachname = pa_Nachname;
Matrikelnr= pa_Matrikelnr;
        
}

void Student::setVorname(string pa_Vorname)
{
Vorname=pa_Vorname; 
}

string Student::getVorname(void)
{
return Vorname; 
}

void Student::setNachname(string pa_Nachname)
{
Nachname=pa_Nachname; 
}

string Student::getNachname()
{
return Nachname; 
}
void Student::setMatnr(unsigned int pa_Matrikelnr)
{
Matrikelnr=pa_Matrikelnr; 
}

unsigned int Student::getMatnr()
{
return Matrikelnr; 
}