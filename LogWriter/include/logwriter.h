/**
 * LogWriter.h
 * Purpose: defines class LogWriter
 *
 * @author Wall.Of.Death
 * @version 1.0 20160629
 */

#ifndef LOGWRITER_H
#define LOGWRITER_H

#include <fstream>
#include <string>
#include <ctime>
#include "slevel.h"

using namespace std;

/**
 * @brief The LogWriter class
 * This class is a lightweight implementation for writing log-files.
 * The path of log-file is set by the constructor.
 * The application which uses the LogWriter has to use a different
 * name in the constructor.
 * The LogWriter supports common syslog severity-levels defined by RFC 3164.
 * See slevel.h for severity-levels.
 */
class LogWriter : public ofstream {
    public:
        LogWriter(string name_, string path_);
        string getName() { return name; };
        string getTimeAsString();
    private:
        string name;
        string path;
};

#endif // LOGWRITER_H
