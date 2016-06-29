#ifndef SLEVEL_H
#define SLEVEL_H

#include <string>

using namespace std;


/**
 * @brief The SeverityLevel enum
 * The list of severities is also defined by RFC 3164
 * source : https://en.wikipedia.org/wiki/Syslog#Severity_level
 *  Val | Severity      | Description             | Examples
 *  ------------------------------------------------------------------------------
 *   0  | Emergency     | System  is  unusable    | This  level  should  not
 *   1  | Alert         | Should  be  corrected   | be  used  by  applications.
 *      |               | immediately             | Loss  of  the  primary  ISP
 *      |	            |			              | connection.
 *   2  | Critical      | Critical  conditions    | A  failure  in  the  system's
 *      |               |                         | primary  application.
 *   3  | Error         | Error  conditions       | An  application  has  exceeded
 *      |		        |                         | its  file  storage  limit  and
 *      | 		        |                         | attempts  to  write  are
 *      |               |                         | failing.
 *   4  | Warning       | May  indicate  that  an | A  non-root  file  system  has
 *      |               | error  will  occur  if  | only  2GB   remaining.
 *      |               | action  is  not  taken. |
 *   5  | Notice        | Events  that  are  un-  |
 *      |               | usual,  but  not  error |
 *      |               | conditions.             |
 *   6  | Informational | Normal  operational     | An  application  has  started,
 *      |               | messages  that  require | paused  or  ended  successfully.
 *      |               | no  action.             |
 *   7  | Debug         | Information  useful  to |
 *      |               | developers  for  debug- |
 *      |               | ging  the  application. |
 *
 */
enum SeverityLevel {EMERGENCY, ALERT, CRITICAL, ERROR, WARNING, NOTICE, INFO, DEBUG};


class SLevel {
    public:
        SLevel(SeverityLevel severityLevel_) {
            severityLevel = severityLevel_;
        }
        SeverityLevel getSeverityLevel() {
            return severityLevel;
        }
        string getSeverityLevelAsString() {
            return severityLevelToString(getSeverityLevel());
        }


    private:
        SeverityLevel severityLevel;
        string severityLevelToString(SeverityLevel severityLevel_);
};

#endif // SLEVEL_H
