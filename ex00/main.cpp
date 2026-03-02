#include "Zombie.hpp"

int main()
{
    Zombie* zombi1 = newZombie("cat");
    zombi1->announce();
    randomChump("dog");
    delete zombi1;
    return(0);
}