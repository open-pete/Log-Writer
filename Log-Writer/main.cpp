#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int i = 0;
    while(1) {
        i++;
        ofstream myfile;
        myfile.open("test.txt", std::ios_base::app);
        myfile << "yyy - " << i << " - Hello World" << endl;
        myfile.close();
    }
    return 0;
}

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

