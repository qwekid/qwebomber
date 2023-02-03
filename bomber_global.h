#pragma once

#include <QtCore/qglobal.h>

#if defined(BOMBER_LIBRARY)
#  define BOMBER_EXPORT Q_DECL_EXPORT
#else
#  define BOMBER_EXPORT Q_DECL_IMPORT
#endif

