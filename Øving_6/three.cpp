#include "std_lib_facilities.h"
#include "fil.h"
#include "three.h"
//------------------------------------------------------------------------------'

void CourseCatalog::addCourse(string code, string name){
    subjects[code] = name;
}

void CourseCatalog::removeCourse(string code){
    subjects.erase(code);
}

string CourseCatalog::getCourse(string code){
    auto subject=subjects.find(code);
    return subject->second;
}

void CourseCatalog::readFile(string file){
    ifstream ifs{file};
    if (!ifs){
        error("Can't open file!");
    }
    string line;
    string code;
    string name;
    while (getline(ifs,line)){
        code=line.substr(0,7);
        name=line.substr(8,line.length());
        addCourse(code,name);
    }
}

void CourseCatalog::writeFile(string file){
    ofstream ofs{file};
    if (!ofs){
        error("Can't open file!");
    }
    for(auto x=subjects.begin();x!=subjects.end();++x){
        ofs<<x->first<<"\t"<<x->second<<endl;
    }
}