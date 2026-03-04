#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    Weapon club = Weapon("crude spiked club");

    // HumanA bob = HumanA("Bob", club);// ikside aynı şey
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();

    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("yet another type of club");
    jim.attack();

}