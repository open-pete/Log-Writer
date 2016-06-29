# Log-Writer
==C++ implementation is a lightweight implementation for writing log-files.==
The path of the log-file is set by the constructor.
The application which uses the LogWriter has to use a different
name in the constructor.
The LogWriter supports common syslog severity-levels defined by RFC 3164.
`enum SeverityLevel {EMERGENCY, ALERT, CRITICAL, ERROR, WARNING, NOTICE, INFO, DEBUG};`
source : https://en.wikipedia.org/wiki/Syslog#Severity_level

| Val | Severity      | Description             | Examples			     |
|-----|---------------|-------------------------|---------------------------------|
|  0  | Emergency     | System  is  unusable    | This  level  should  not|
|  1  | Alert         | Should  be  corrected   | be  used  by  applications.|
|     |               | immediately             | Loss  of  the  primary  ISP connection.|
|  2  | Critical      | Critical  conditions    | A  failure  in  the  system's primary  application.|
|  3  | Error         | Error  conditions       | An  application  has  exceeded its  file  storage  limit  and attempts  to  write  are failing.|
|  4  | Warning       | May  indicate  that  an error  will  occur  if action  is  not  taken. | A  non-root  file  system  has only  2GB   remaining.|
|  5  | Notice        | Events  that  are  unusual,  but  not  error conditions.  ||
|  6  | Informational | Normal  operational messages  that  require no  action.   | An  application  has  started, paused  or  ended  successfully.|
|  7  | Debug         | Information  useful  to developers  for  debugging  the  application. |



**DO ALWAYS END A LOG COMMAND BY "endl"**
(this ensures that your data is immediately flushed into the file)

For use see the following
**Example :**
```
#include "include/logwriter.h"

int main() {
    LogWriter Lw("Application1", "Log.txt");
    Lw << SLevel(ERROR) << "Attention attention an error happend" << endl;
    Lw << SLevel(INFO) <<  "Just for infomation the value was " << 45 << endl;

    return 0;
}
```


**Output (Log.txt)**
```
29/06/16-14:50:47 - ERROR     - Application1 - Attention attention an error happend
29/06/16-14:50:47 - INFO      - Application1 - Just for infomation the value was 45
```
##!Attention!
Please note that this project is developed as a C++ - beginner - project.
Therefore the design, syntax and the programming style might not be perfect.
