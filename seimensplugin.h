#ifndef SEIMENSPLUGIN_H
#define SEIMENSPLUGIN_H
#include <QtPlugin>

#include "SeimensPlugin_global.h"
#define IID_FACE "com.seimens.asml.device_1/0"

class SEIMENSPLUGIN_EXPORT SeimensPlugin
{
public:
    SeimensPlugin() {};
    ~SeimensPlugin() {};

    virtual bool open()=0;
    virtual bool readData()=0;
    virtual bool close()=0;
};

Q_DECLARE_INTERFACE(SeimensPlugin,IID_FACE)
#endif // SEIMENSPLUGIN_H
