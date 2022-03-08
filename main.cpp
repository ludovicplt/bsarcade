#include <iostream>
#include <dlfcn.h>
#include "object.hpp"

int main(void)
{
    typedef object *(*func_t)();
    void *op = dlopen("./object.so", RTLD_LAZY);
    func_t init = (func_t)dlsym(op, "load");

    object *test = init();


    dlclose(op);
}
