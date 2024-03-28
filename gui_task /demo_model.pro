#-------------------------------------------------
#
# Project created by QtCreator 2023-12-27T11:54:49
#
#-------------------------------------------------

QT += gui core multimedia


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

LIBS += -L/home/venu/QT/gui_task/lib -lNfcrdlibEx10_MIFAREDESFire
LIBS += $$PWD/lib/libMFS100_100V2FingerAuth_Native.a
LIBS += -L$$PWD/lib -Wl,-rpath=../lib -lIPL_AuthDevices -liengine_ansi_iso

LIBS+=  -lQt5Multimedia -lQt5Widgets -lQt5Gui -lQt5Network -lQt5Core -lGLESv2 -lEGL -lpthread


TARGET = demo_model
TEMPLATE = app


SOURCES += main.cpp\
    lcd_test.cpp \
    touch_test.cpp \
    color_test.cpp \
    led_test.cpp \
    speaker_test.cpp \
    relay_test.cpp \
    ethernet.cpp \
    keyboard.cpp \
    second_keyboard.cpp \
    third_keyboard.cpp \
    sam_test.cpp \
    rfid_test.cpp \
    CardConnectionThread.cpp \
    finger_print_capture.cpp \
    recommended_standard.cpp \
    screen.cpp \
    test_screen.cpp \
    home.cpp

HEADERS  += \
    lcd_test.h \
    touch_test.h \
    color_test.h \
    led_test.h \
    speaker_test.h \
    relay_test.h \
    ethernet.h \
    keyboard.h \
    second_keyboard.h \
    third_keyboard.h \
    sam_test.h \
    cdac_header.h \
    rfid_test.h \
    CardConnectionThread.h \
    finger_print_capture.h \
    MFS100_100V2_FP.h \
    recommended_standard.h \
    screen.h \
    test_screen.h \
    home.h

FORMS    += \
    lcd_test.ui \
    touch_test.ui \
    color_test.ui \
    led_test.ui \
    speaker_test.ui \
    relay_test.ui \
    ethernet.ui \
    keyboard.ui \
    second_keyboard.ui \
    third_keyboard.ui \
    sam_test.ui \
    rfid_test.ui \
    finger_print_capture.ui \
    recommended_standard.ui \
    screen.ui \
    test_screen.ui \
    home.ui

RESOURCES += \
    audio_resource.qrc
