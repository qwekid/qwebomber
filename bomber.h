#pragma once

#include "bomber_global.h"
#include <QString>

class BOMBER_EXPORT Bomber
{
public:
    Bomber();
    void setTargetNumber(const QString &number);
    void setCountOfMessages(const int &count);
    void start();
private:
    QString targetNumber;
    int smsCounter;
    void sendRequest();
};


