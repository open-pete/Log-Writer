#include <iostream>
#include <ctime>

#include "include/logwriter.h"


using namespace std;

int main()
{
    cout << "Hello World" << endl;
    LogWriter Lw("lwtest", "test.txt");
    Lw.open("test.txt", std::ios_base::app);

    Lw << SLevel(ERROR) << "Hallo Lw" << endl;
    //Lw << 45 << endl;
    Lw.close();

    return 0;
}
