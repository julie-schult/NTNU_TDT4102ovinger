#include "std_lib_facilities.h"
//------------------------------------------------------------------------------'

struct Temps{
    double max;
    double min;
};

istream& operator>>(istream& is, Temps& t);
ostream& operator<<(ostream& os, vector<Temps>&temps);
void getTemps(vector<Temps>& temps, string file);
