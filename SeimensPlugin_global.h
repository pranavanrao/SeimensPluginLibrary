#ifndef SEIMENSPLUGIN_GLOBAL_H
#define SEIMENSPLUGIN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SEIMENSPLUGIN_LIBRARY)
#define SEIMENSPLUGIN_EXPORT Q_DECL_EXPORT
#else
#define SEIMENSPLUGIN_EXPORT Q_DECL_IMPORT
#endif

#endif // SEIMENSPLUGIN_GLOBAL_H
