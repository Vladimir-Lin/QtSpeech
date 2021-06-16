/****************************************************************************
 *                                                                          *
 * Copyright (C) 2015 Neutrino International Inc.                           *
 *                                                                          *
 * Author : Brian Lin <lin.foxman@gmail.com>, Skype: wolfram_lin            *
 *                                                                          *
 ****************************************************************************/

#ifndef QT_SPEECH_H
#define QT_SPEECH_H

#include <QtVocal>

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#    if defined(QT_BUILD_QTSPEECH_LIB)
#      define Q_SPEECH_EXPORT Q_DECL_EXPORT
#    else
#      define Q_SPEECH_EXPORT Q_DECL_IMPORT
#    endif
#else
#    define Q_SPEECH_EXPORT
#endif

namespace N
{

class Q_SPEECH_EXPORT Speech ;

class Q_SPEECH_EXPORT Speech
{
  public:

    double longitude ;
    double latitude  ;
    double height    ;

    explicit Speech (void);
    virtual ~Speech (void);

  protected:

  private:

};

}

QT_END_NAMESPACE

#endif
