
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void    HumanA::attack()
{
    std::cout << HumanA::name << " attakcs with their " <<this->weapon.getType() << std::endl;
}