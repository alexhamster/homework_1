#include "lib.h"

#include <spdlog/spdlog.h>
#include <iostream>


int main()
{
    std::cout << "build " << version() << std::endl << "Hello, World!" << std::endl;
    return 0;
}
