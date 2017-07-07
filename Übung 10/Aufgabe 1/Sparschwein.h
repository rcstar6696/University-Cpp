#pragma once
# include <string>
using namespace std ;

class Sparschwein {
    
public:
    float guthaben;
    Sparschwein();
    Sparschwein(float guthaben); 
    int einwerfen(float in);
    int printGuthaben();
    Sparschwein operator+(Sparschwein const& rhs)const;
 };