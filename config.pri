#CONFIG += static
CONFIG += release

macx {
    CONFIG += c++11
}

# test config
LIST = thread exceptions rtti stl
for(f, LIST) {
    !CONFIG($$f) {
        warning("Add '$$f' to CONFIG, or you will meet some problems.")
    }
}

