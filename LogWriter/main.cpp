#include <iostream>
#include <ctime>

#include "include/logwriter.h"
#include "include/slevel.h"


using namespace std;

int main()
{
    cout << "Hello World" << endl;
    LogWriter Lw("Application1", "Log.txt");
    Lw.open("Log.txt", std::ios_base::app);

    Lw << SLevel(ERROR) << "Attention attention are error happend" << endl;
    Lw << SLevel(INFO) <<   45 << endl;
    Lw.close();

    return 0;
}
