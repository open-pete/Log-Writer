#ifndef LOGW_H
#define LOGW_H

#include <fstream>

//class fstream;

using namespace std;

class LogW : public ofstream {
    public:
        LogW(string name_, string path_);
        ofstream& operator<< (int val) : ofstream(val) {
            writeLogPrefix();
        };
    private:
        void writeLogPrefix();
        string name;
        string path;

};

#endif // LOGW_H
