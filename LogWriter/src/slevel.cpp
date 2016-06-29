#include "../include/slevel.h"

string SLevel::severityLevelToString(SeverityLevel severityLevel_) {
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
