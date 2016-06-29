#include "../include/logwriter.h"

LogWriter::LogWriter(string name_, string path_){
   name = name_;
   path = path_;
}

/*
LogWriter& LogWriter::operator<<(SLevel severityLevel_) {
    *this << getTimeAsString() << " - ";
    *this << severityLevel_.getSeverityLevelAsString() << " - " ;
    *this << getName() << " - ";
    return *this;
}*/

string LogWriter::getTimeAsString() {
    time_t rawtime;
    struct tm * timeinfo;
    char buffer [80];

    time (&rawtime);
    timeinfo = localtime (&rawtime);

    //returns string like 29/06/16-11:15:10
    strftime (buffer,80,"%d/%m/%y-%T",timeinfo);
    return buffer;
}
