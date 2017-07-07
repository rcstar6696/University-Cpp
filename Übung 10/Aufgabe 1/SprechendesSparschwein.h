#pragma once
# include <string>
# include "Sparschwein.h"

using namespace std;

class SprechendesSparschwein:public Sparschwein 
{
    
private:
    string uni_string;
public:
    SprechendesSparschwein(float guthaben, string pa_string);
    int sprich();
 };