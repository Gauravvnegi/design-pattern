#include "logger.hpp"
#include <iostream>

using namespace std;

// Initialize static members
int Logger::cnt = 0;
Logger* Logger::loggerIntance = nullptr;
Mutex * Logger :: mtx;  
Logger::Logger() {
    cnt++;
    cout << "New Instance is created: " << cnt << endl;
}

void Logger::log(string msg) {
    cout << msg << endl;
}

Logger* Logger::getIntance() {
   if(loggerIntance==nullptr){
    mtx.lock();
     if (loggerIntance == nullptr) {
        loggerIntance = new Logger();
    }
    mtx.unlock();
   }
    return loggerIntance;
}
