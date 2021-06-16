NAME         = QtSpeech
TARGET       = $${NAME}

QT           = core
QT          -= gui
QT          += network
QT          += sql
QT          += script
QT          += Essentials
QT          += Mathematics
QT          += QtFFmpeg
QT          += QtAudio
QT          += AudioIO
QT          += QtPhonemes
QT          += QtVocal

load(qt_build_config)
load(qt_module)

INCLUDEPATH += $${PWD}/../../include/$${NAME}

HEADERS     += $${PWD}/../../include/$${NAME}/qtspeech.h

SOURCES     += $${PWD}/nSpeech.cpp

OTHER_FILES += $${PWD}/../../include/$${NAME}/headers.pri

include ($${PWD}/../../doc/Qt/Qt.pri)

TRNAME       = $${NAME}
include ($${PWD}/../../Translations.pri)
