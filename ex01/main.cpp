#include "Zombie.hpp"

int main()
{
    Zombie* army = zombieHorde(5, "BEAR");
    for (int i = 0; i < 5; i++)
    {
        army[i].announce();
    }
    delete[]army;
}