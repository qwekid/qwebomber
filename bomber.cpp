#include "bomber.h"

Bomber::Bomber()
{
    m_NetworkAccessManager=new QNetworkAccessManager;
}

void Bomber::setTargetNumber(const QString &number)
{
    targetNumber=number;
}

void Bomber::setCountOfMessages(const int &count)
{
    smsCounter=count;
}

void Bomber::start()
{
    for(int i=0;i<smsCounter;i++){

    }
}

void Bomber::sendRequest()
{

}
