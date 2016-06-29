#include "include/logwriter.h"

int main() {

    LogWriter Lw("Application1", "Log.txt");
    Lw << SLevel(ERROR) << "Attention attention a error happend" << endl;
    Lw << SLevel(INFO) <<  "Just for infomation the value was " << 45 << endl;

    return 0;
}
