#include "../include/slevel.h"

string SLevel::severityLevelToString(SeverityLevel severityLevel_) const {
    switch (severityLevel_){
        case EMERGENCY  : return "EMERGENCY"; break;
        case ALERT      : return "ALERT    "; break;
        case CRITICAL   : return "CRITICAL "; break;
        case ERROR      : return "ERROR    "; break;
        case WARNING    : return "WARNING  "; break;
        case NOTICE     : return "NOTICE   "; break;
        case INFO       : return "INFO     "; break;
        case DEBUG      : return "DEBUG    "; break;
        default : return "";
    }
};

LogWriter& operator<<(LogWriter& logWriter_, const SLevel severityLevel_) {
    logWriter_ << logWriter_.getTimeAsString() << " - ";
    logWriter_ << severityLevel_.getSeverityLevelAsString() << " - " ;
    logWriter_ << logWriter_.getName() << " - ";
    return logWriter_;
}
