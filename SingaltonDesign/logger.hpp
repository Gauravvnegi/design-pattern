#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
using namespace std;
#include <mutex>
class Logger {
    static int cnt;
    static Logger *loggerIntance;
    static mutex mtx;
    Logger();
    Logger(const Logger &)

public:
    static Logger *getIntance();
    void log(string msg);
};

#endif
