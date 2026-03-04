#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << "--- Harl is complaining ---" << std::endl;
    harl.complain("ERROR");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("DEBUG");

    std::cout << "\n--- Harl gets a wrong command ---" << std::endl;
    harl.complain("PIZZA");

    return(0);
}