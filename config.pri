#Config
#CONFIG += static
CONFIG += release
macx {
    CONFIG += c++11
}
CONFIG += warn_on thread exceptions rtti stl

#qt
QT -= gui
QT += core

#output
OBJECTS_DIR = _build/obj
MOC_DIR = _build
win32 {
    DESTDIR = $$OUT_PWD
}

# test config
LIST = thread exceptions rtti stl
for(f, LIST) {
    !CONFIG($$f) {
        warning("Add '$$f' to CONFIG, or you will meet some problems.")
    }
}

