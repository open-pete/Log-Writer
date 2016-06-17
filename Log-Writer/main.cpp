#include <iostream>
#include <fstream>

using namespace std;
/*
int main(){
    while(1) {
        ofstream myfile;
        myfile.open("test.txt", std::ios_base::app);
        myfile << "Hello World" << endl;
        myfile.close();
    }
    return 0;
}
*/

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
}
