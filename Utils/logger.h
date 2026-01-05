#pragma once
#include <iostream>
using namespace std;

class Logger
{
private:
    static Logger *instance;
    Logger() {}

public:
    static Logger *getInstance()
    {
        if (!instance)
        {
            instance = new Logger();
        }
        return instance;
    }

    void log(const string &msg)
    {
        cout << "[LOG]" << msg << endl;
    }
};

Logger *Logger::instance = nullptr;

/*

*/