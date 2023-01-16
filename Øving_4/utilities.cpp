#include "utilities.h"
//------------------------------------------------------------------------------

int incrementByValueNumTimes(int startValue, int increment, int numTimes) { 
    for (int i = 0; i < numTimes; i++) {
           startValue += increment;
       }
    return startValue; 
}

int incrementByValueNumTimesRef(int& startValue, int& increment, int& numTimes){
    for (int i = 0; i < numTimes; i++) {
           startValue += increment;
       }
    return startValue; 
}

void swapNumbers(int& a, int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    return;
}

vector<int> randomizeVector(vector<int>& vec, int n){
    for (int i=0;i<n;++i){
        srand(time(NULL));
        int tall=rand()%(100+1);
        if (count(vec.begin(), vec.end(),tall)){
            i-=1;
        }
        else{
            vec.push_back(tall);
        }
    }
    return vec;
}

vector<int> sortVector(vector<int>& vec){
    int i=1;
    while (i<vec.size()){
        int j=i;
        while (j>0 && vec[j-1]>vec[j]){
            swapNumbers(vec[j-1],vec[j]);
            j-=1;
        }
        i+=1;
    }
    return vec;
}

void medianOfVector(vector<double> vec){
    int s=vec.size();
    if (s % 2 == 0){
      double median=(vec[s / 2 - 1] + vec[s / 2]) / 2;
      cout<<"Median: "<<median<<endl;
    }
    else {
      int median=vec[s / 2];
      cout<<"Median: "<<median<<endl;
    }
}

struct student
{
    string name;
    string studyProgram;
    int age;
};

void printStudent(){
    student s;
    cout << "Name: ";
    cin >> s.name;
    cout << "Age: ";
    cin >> s.age;
    cout << "Study Program: ";
    cin >> s.studyProgram;
    cout<<"------------------------------------------------------------------"<<endl;
    cout << "Your name is " << s.name << endl;
    cout <<"Your age is " << s.age << endl;
    cout << "You are studying " << s.studyProgram<<endl;
}

string randomizeString(int n, char min, char max){
    string str;
    for(int i = 0; i < n; ++i){
        srand(time(NULL));
        char letter = rand()%(max-min+1)+min;
        if(count(str.begin(), str.end(),letter)){
            i-=1;
        }
        else{
        str.push_back(letter);
        }
    }
    return str;
}

string readInputToString(){
    int a;
    char min;
    char max;
    cout<<"Antall :";
    cin>>a;
    cout<<"Min: ";
    cin>>min;
    cout<<"Max: ";
    cin>>max;
    string grades= randomizeString(a,toupper(min),toupper(max));
    return grades;
}

int countChar(string a, char b){
    int forekomster=count(a.begin(), a.end(), b);
    return forekomster;
}