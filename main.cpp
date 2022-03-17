#include <iostream>
#include <dlfcn.h>
#include "object.hpp"

int main(void)
{
    void *op = dlopen("./object.so", RTLD_LAZY);
    Iobject *test = (Iobject *)dlsym(op, "current");

    if (test == NULL)
        std::cout << "ERROR:" << std::endl;

    test->do_smth();
    dlclose(op);
}
