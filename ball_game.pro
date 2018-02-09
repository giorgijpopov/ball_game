TEMPLATE += app

HEADERS       = src/gui/game_process_view.h \
    src/gui/ball_data_gui.h \
    src/gui/abstract_geom_object.h \
    src/gui/line_segment_object.h \
    src/kernel/constants.h \
    src/kernel/math_functions.h \
    src/kernel/future_cpp_features.h \
    src/gui/geometry_data_gui.h \
    src/gui/qt_svg_painter.h \
    src/gui/game_window.h \
    src/gui/single_visibility_widget.h \
    src/gui/home_screen_widget.h

SOURCES       = src/main.cpp \
    src/gui/game_process_view.cpp \
    src/gui/ball_data_gui.cpp \
    src/gui/abstract_geom_object.cpp \
    src/gui/line_segment_object.cpp \
    src/kernel/math_functions.cpp \
    src/gui/geometry_data_gui.cpp \
    src/gui/qt_svg_painter.cpp \
    src/gui/game_window.cpp \
    src/gui/single_visibility_widget.cpp \
    src/gui/home_screen_widget.cpp

QT += core gui
QT += widgets
QT += xml svg
QTPLUGIN += qsvg
QMAKE_CXXFLAGS += -std=c++11
RESOURCES     = a.qrc
