#include "object.hpp"
#include "stdlib.h"
#include "unistd.h"

object::object()
{
    std::cout << "init" << std::endl;
}

object::~object()
{
    std::cout << "destroy" << std::endl;
}

int object::do_smth()
{
    write(1, "lol\n", 4);
    return (0);
}

extern "C"
{
    object *current = NULL;
    object *load() __attribute__((constructor));
    object *load()
    {
        current = new object;
        return current;
    }

    void destructor() __attribute__((destructor));
    void destructor()
    {
        delete current;
    }
}
