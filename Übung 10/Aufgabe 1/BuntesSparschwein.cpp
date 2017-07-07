# include <iostream>
# include <string>
# include "BuntesSparschwein.h"

using namespace std;

BuntesSparschwein::BuntesSparschwein (float guthaben , int pa_r ,int pa_g ,int pa_b)
{
this->guthaben=guthaben;
r=pa_r;
g=pa_g;
b=pa_b;
    

}

int BuntesSparschwein::printColor()
{
cout << "Variable r: " << r << endl;
cout << "Variable g: " << g << endl;
cout << "Variable b: " << b << endl;
return 0;
}

