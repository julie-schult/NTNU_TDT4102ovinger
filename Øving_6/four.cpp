#include "std_lib_facilities.h"
#include "fil.h"
#include "three.h"
#include "four.h"
//------------------------------------------------------------------------------'

istream& operator>>(istream& is, Temps& t){
    double max;
    double min;
    is>>max;
    is>>min;
    if (!is)
        return is;
        t=Temps{max, min};
        return is;
}

ostream& operator<<(ostream& os, vector<Temps>&temps){
    for (const auto t: temps){
        os<<t.max<<"\t"<<t.min<<endl;
    }
    return os;
}

void getTemps(vector<Temps>& temps, string file){
    ifstream ifs{file};
    if (!ifs){
        error("File can not be opened!");
    }
    Temps t;
    string line;
    while (getline(ifs,line)){
        istringstream s{line};
        s>>t;
        temps.push_back(t);
    }
}