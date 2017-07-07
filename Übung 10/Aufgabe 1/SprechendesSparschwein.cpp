# include <iostream>
# include <string>
# include "SprechendesSparschwein.h"

using namespace std;

SprechendesSparschwein::SprechendesSparschwein (float guthaben ,string pa_string)
{
this->guthaben=guthaben;
uni_string=pa_string;
}

int SprechendesSparschwein::sprich()
{
cout << uni_string << endl;
return 0;
}

