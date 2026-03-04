#include "Replacer.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "try again" << std::endl;
        return(1);
    }
    Replacer doIt(av[1], av[2], av[3]);
    doIt.replace();
}