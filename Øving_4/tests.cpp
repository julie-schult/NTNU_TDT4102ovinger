#include "tests.h"
#include "utilities.h"
//------------------------------------------------------------------------------

void testCallByValue() { 
    int v0 = 5;
    int increment = 2;
    int iterations = 10;
    int result = incrementByValueNumTimes(v0, increment, iterations); 
    cout << "v0: " << v0
        << " increment: " << increment
        << " iterations: " << iterations
        << " result: " << result << endl;
}

void testCallByReference(){
    int v0 = 5;
    int increment = 2;
    int iterations = 10;
    int result = incrementByValueNumTimes(v0, increment, iterations); 
    cout << "v0: " << v0
        << " increment: " << increment
        << " iterations: " << iterations
        << " result: " << result << endl;
}

void testVectorSorting(){
    vector<int> percentages;
    int n;
    cout<<"Antall tall i vektoren:";
    cin>>n;
    randomizeVector(percentages, n);
    cout<<"Vektor: "<<endl;
    for (int i : percentages){
        cout<<i<<endl;
    }
    cout<<"1 og 2 sortert: "<<endl;
    swapNumbers(percentages[0],percentages[1]);
    for (int i : percentages){
        cout<<i<<endl;
    }
    cout<<"Alt sortert:"<<endl;
    sortVector(percentages);
    for (int i : percentages){
        cout<<i<<endl;
    }
}

void testString(int a, char b, char c){
    string grades=randomizeString(a,b,c);
    cout<<grades<<endl;
    vector<double> gradeCount;
    int A=countChar(grades, 'A');
    int B=countChar(grades, 'B');
    int C=countChar(grades, 'C');
    int D=countChar(grades, 'D');
    int E=countChar(grades, 'E');
    int F=countChar(grades, 'F');
    gradeCount.push_back(A);
    gradeCount.push_back(B);
    gradeCount.push_back(C);
    gradeCount.push_back(D);
    gradeCount.push_back(E);
    gradeCount.push_back(F);
    for (int i : gradeCount){
        cout<<i<<", ";
    }
    double snitt=(A*5+B*4+C*3+D*2+E*1+F*0)/(A+B+C+D+E+F);
    cout<<"Snitt: "<<snitt;
}