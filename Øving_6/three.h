#include "std_lib_facilities.h"
//------------------------------------------------------------------------------'

class CourseCatalog{
    private:
        map<string, string> subjects;
    public:
        friend ostream& operator<<(ostream&, const CourseCatalog&);
        void addCourse(string code, string name);
        void removeCourse(string code);
        string getCourse(string code);

        void writeFile(string file);
        void readFile(string file);
};