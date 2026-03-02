
#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    //burada direkt oalrak bu fonk çalıştığında name ialıp constructor çalıaşcak
    Zombie* heap_zombie = new Zombie(name);

    return(heap_zombie);
    //burada hafızadaki mallocla yer açtığmız zombienin adresini döner
    // return(new Zombie(name)); bu şekilde kısaltma da kullanılabilir
}

