# include <iostream> 
# include <string>
# include "Sparschwein.h"

using namespace std;

Sparschwein::Sparschwein()
{
guthaben=0;
}

Sparschwein::Sparschwein (float guthaben)
{
this->guthaben=guthaben;    

}

int Sparschwein::einwerfen(float in)
{
guthaben=guthaben+in;  
    
cout << "Neues Guthaben: " << guthaben << endl;
return 0;
}

int Sparschwein::printGuthaben()
{
cout << "Aktuelles Guthaben: " << guthaben << endl;
return 0;
}

Sparschwein Sparschwein::operator+(Sparschwein const& rhs)const{
Sparschwein s;
s.guthaben=this->guthaben + rhs.guthaben;
return s.guthaben;
}