#include "SeimensDevice.h"
#include <QDebug>

SeimensDevice::SeimensDevice() {
    qDebug()<<Q_FUNC_INFO<<"enjoy madi";
}

bool SeimensDevice::open()
{
    qDebug()<<Q_FUNC_INFO<<"open the tata device";
    return true;
}

bool SeimensDevice::readData()
{
    qDebug()<<Q_FUNC_INFO<<"read the tata device";

    return true;
}

bool SeimensDevice::close()
{
    qDebug()<<Q_FUNC_INFO<<"close the tata device";

    return true;
}
