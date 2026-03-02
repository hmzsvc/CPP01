#include "Zombie.hpp"

void randomChump(std::string name)
{
    //burada nesnemi oluşturdum ve ismi stackZombie oldu
    Zombie stackZombie(name);
    // burada oluşturdğumuz nesneyi bağır diye komut verdim 
    stackZombie.announce();
}