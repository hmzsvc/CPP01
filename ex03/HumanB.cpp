#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
    //bu yukarıdaki sisteme member initilazer list (üye başlatıcı listesi) denir ve sadece constructor da kullanılır.
    //burada sisteme senin başlangıç değerlerin bunlar diye belirtiyoruz aslında
    // this->name = name; bura silinebilir ve yukarıdaki sistem bırakılabilir 
}

HumanB::~HumanB()
{
}
void    HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
    // Referanstan gelen nesnenin ADRESİNİ (&), kendi içimizdeki pointer'a atıyoruz. Çünkü pointer'lar adres tutar.
} 

void    HumanB::attack()
{
    if (this->weapon)
    {
        std::cout << this->name << " attacks with their " <<this->weapon->getType() << std::endl;
    }
    
}
