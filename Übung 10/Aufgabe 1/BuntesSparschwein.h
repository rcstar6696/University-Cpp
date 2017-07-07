#pragma once
# include <string>
# include "Sparschwein.h"
using namespace std ;

class BuntesSparschwein:public Sparschwein {
    
private:
    int r,g,b;
 public:
    BuntesSparschwein(float guthaben, int pa_r ,int pa_g, int pa_b);
    int printColor();
 };