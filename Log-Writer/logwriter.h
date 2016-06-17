#ifndef LOGWRITER_H
#define LOGWRITER_H

#include <iostream>
#include <sstream>

using namespace std;

class LogWriter {
    public:
        LogWriter(string name_, string path_);
        void write(stringstream* sstr_) {
            cout << sstr_->str();
        }

        void operator<< (string s_) {
            cout << name << " : " << s_ << endl;
        }
        void operator<< (double d_) {
            cout << name << " : " << d_ << endl;
        }
        void operator<< (int i_) {
            cout << name << " : " << i_ << endl;
        }
        void operator<< (char c_) {
            cout << name << " : " << c_ << endl;
        }
        void operator<< (stringstream sstr_) {
            cout << name << " : " << sstr_.str() << endl;
        }

        /*
        friend stringstream* operator<<(string s1_, string s2_) {
            stringstream* sstr;
            *sstr << s1_ << s2_;
            return sstr;
        }*/

        /*friend string op-erator<<(string s1_, string s2_) {
            stringstream sstr;
            sstr << s1_ << s2_;
            return sstr.str();
        }*/


    private:
        string name;
        string path;
};

#endif // LOGWRITER_H
