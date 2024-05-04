#ifndef SEIMENSDEVICE_H
#define SEIMENSDEVICE_H

#include <QObject>
#include <seimensplugin.h>

class SeimensDevice:public QObject,public SeimensPlugin
{
    Q_OBJECT
    Q_INTERFACES(SeimensPlugin)
    Q_PLUGIN_METADATA(IID IID_FACE)
public:
    explicit SeimensDevice();
    bool open() override;
    bool readData() override;
    bool close() override;
};

#endif // SEIMENSDEVICE_H
