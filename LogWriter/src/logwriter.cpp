/**
 * LogWriter.cpp
 * Purpose: implements class LogWriter
 *
 * @author Wall.Of.Death
 * @version 1.0 20160629
 */

#include "../include/logwriter.h"
#include <iostream>

using namespace std;

/**
 * LogWriter::LogWriter(string name_, string path_)
 * @brief constructor of class LogWriter, opens file at path_
 * @param name_ name of application which uses the LogWriter-Class
 * @param path_ path of log-file
 *
 * Constructor sets the attributes name and path and opens
 * the stream to a file at path "path_" in append mode.
 * If the file does not exist, it is created
 */
LogWriter::LogWriter(string name_, string path_){
   name = name_;
   path = path_;
   // open file and append everything to the content which is already in the file
   open(path_.c_str(), std::ios_base::app);
}

/**
 * LogWriter::getTimeAsString()
 * @brief returns date and time as a dd/mm/yy-hh:mm:ss formatted string
 * @return returns date and time as a dd/mm/yy-hh:mm:ss formatted string
 *
 * time refers to timezone of the local machine
 */
string LogWriter::getTimeAsString() {
    time_t rawtime;       // create time_t
    struct tm * timeinfo; // create time pointer
    char buffer [80]; // create buffer for string

    time (&rawtime);  // get current time into rawtime (seconds since 1970)
    timeinfo = localtime (&rawtime); // transform rawtime by timezone to localtime

    // time_struct-->string
    // returns string like 29/06/16-11:15:10
    strftime (buffer,sizeOf(buffer),"%d/%m/%y-%T",timeinfo);
    return buffer;
}
