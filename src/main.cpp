
#include "addfolder_factory.hpp"

int main(int argc, const char* argv[])
{
    auto addfolder = addfolder_factory();

    std::cout << addfolder.current << std::endl;
    addfolder.fold(5);
    std::cout << addfolder.current << std::endl;
    addfolder.fold(10);
    std::cout << addfolder.current << std::endl;

    return 0;
}
