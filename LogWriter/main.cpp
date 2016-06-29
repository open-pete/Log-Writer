#include <iostream>
#include <ctime>

#include "include/logwriter.h"

using namespace std;

int main()
{
    cout << "Hello World" << endl;
    LogWriter Lw("Application1", "Log.txt");

    Lw << SLevel(ERROR) << "Attention attention are error happend" << endl;
    Lw << SLevel(INFO) <<  "Just for infomation the value was " << 45 << endl;

    return 0;
}
