#include "std_lib_facilities.h"
#include "fil.h"
//------------------------------------------------------------------------------'

//Oppgave 1a
void ReadWord(){
    string word;
    ofstream myfile;
    myfile.open("Task1.txt");
    while (word!="quit"){
        cout<<"Your word: ";
        cin>>word;
        if (word=="quit"){
            break;
        }
        myfile<<word<<endl;
    }
    myfile.close();
}

//Oppgave 2b
void ReadCreate(){
    string filename("Task1.txt");
    string filename2("Task2.txt");
    fstream in;
    ofstream out;

    in.open(filename);
    filename2+=filename;
    out.open(filename2);

    int linenumber=1;
    do{
        string line;
        line+=to_string(linenumber);
        line+="\t";
        string fromfile;
        getline(in,fromfile);
        line+=fromfile;
        line+="\n";
        cout<<line;
        out<<line;
        ++linenumber;
    }while(!in.eof()); //end og file
    in.close();
    out.close();
    cout<<"Your text file has now been copied to a new file"<<endl;
}

//Oppgave 2
void CountLetters(string file){
    vector<char> vec;
    vector<int> numberVec;
    for(int i=97;i<123;i++){
        vec.push_back(static_cast<char>(i));
    }

    for(int i=0; i<vec.size();i++){
        int number=0;
        char c;
        ifstream ifs{file}; 
        if (!ifs) {
            error("File can not be opened.");
        }
        while(!ifs.eof()){
            ifs.get(c);
            if (tolower(c)==vec[i]){
                number+=1;
            }
            
        }
        numberVec.push_back(number);
    }
    for(int n=0; n<vec.size();n++){
        cout << vec[n];
        cout << "=" << numberVec[n] << endl;
    }
}