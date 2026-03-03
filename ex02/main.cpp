#include <string>
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str; // adres eşitlerken tipini belirtirken * atmak gerek
    std::string& stringREF = str; // adresin referansı ile birebir aynısı adresi tutar
    //birinde değişken tanımlar ve adresi buna tanımlarız 
    //Referans yeni bir değişken veya yer oluşturmaz. Var olan bir değişkene ikinci bir isim (lakap) takar. Bu yüzden eşittirin sağına & konmaz, direkt değişkenin kendisi yazılır.

    std::cout << "str = " << &str << std::endl;
    std::cout << "stringPTR = " << stringPTR << std::endl;
    std::cout << "stringREF = " << &stringREF << std::endl;

    std::cout << "str = " << str << std::endl;
    std::cout << "stringPTR = " << *stringPTR << std::endl;
    std::cout << "stringREF = " << stringREF << std::endl;
}
