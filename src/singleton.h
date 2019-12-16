#ifndef SINGLETON_H
#define SINGLETON_H


#include "my_log_export.h"

namespace MyLogNS {

class Singleton
{
public:
    Singleton();

    static MyLogExport& GetInstance() {
        if (instance == nullptr) {
            instance = new MyLogExport();
        }
        return *instance;
    }


private:
    static MyLogExport *instance;
};

} //MyLogNS

#endif // SINGLETON_H
