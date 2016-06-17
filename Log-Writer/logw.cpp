#include "logw.h"

LogW::LogW(string name_, string path_){
   name = name_;
   path = path_;
}

void LogW::writeLogPrefix() {
    *this << name;
}
