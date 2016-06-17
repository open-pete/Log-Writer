#include <iostream>
#include <fstream>
#include "logwriter.h"
#include "logw.h"
#include <sstream>

using namespace std;

int main(){
    LogW Lw("lwtest", "test.txt");
    Lw.open("test.txt", std::ios_base::app);

    Lw << "Hallo Lw" << endl;
    Lw << 45;
    Lw.close();


    LogWriter Log("testLog", "log.txt");
    string s;
    s = "Hallo und so";
    stringstream sstr;
    sstr << "test " << "und so\n";
    Log << s;
    Log.write(&sstr);

    Log << 46.3;
    Log << true;
    Log << 4;
    //Log << "hi " << "du da";

    //Log << endl;
    return 0;
}

/*
int main(){
    int i = 0;
    while(1) {
        i++;
        ofstream myfile;
        while(!myfile.is_open()) { // wait until it is possible to open file
            myfile.exceptions(ofstream::failbit | ofstream::badbit);
            try {
                myfile.open("test.txt", std::ios_base::app);
            } catch (ofstream::failure e) {
                cerr << "Exception : Error during opening file" << endl;
            }
        }
        myfile.exceptions(ofstream::failbit | ofstream::badbit);
        try {
            myfile << "yyy - " << i << " - Hello World" << endl;
            myfile.close();
        } catch (ofstream::failure e) {
            cerr << "Exception : Error during writing / closing file" << endl;
        }
    }
    return 0;
}
*/

/*
int main(){
    string s;
    cout << "Enter 'X' to write to the file" << endl;
    while(1) {
        cin >> s;
        if (toupper(s[0]) == 'X') {
            ofstream myfile;
            myfile.open("test.txt", std::ios_base::app);
            myfile << "tadam tadam tadam" << endl;
            myfile.close();
            cout << "Written to file successfully!" << endl;
        }
    }
    return 0;
}*/

