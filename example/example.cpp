#include <RGE/version.h>

#include <iostream>

int main() {
    std::cout << RGE::version::get_version() << std::endl;

    return 0;
}