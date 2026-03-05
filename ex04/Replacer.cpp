#include "Replacer.hpp"

Replacer::Replacer(std::string filename, std::string s1, std::string s2) : filename(filename), s1(s1), s2(s2)
{
}

Replacer::~Replacer()
{
}

void Replacer::replace()
{
    std::ifstream lockOpen(this->filename.c_str());
    if (!lockOpen)
    {
        std::cerr << "permission denied" << std::endl;
        return;
    }
    std::ofstream fileOut((this->filename + ".replace") .c_str());
    if (!fileOut)
    {
        std::cerr << "permission denied" << std::endl;
        return;
    }
    std::string line;
    while (std::getline(lockOpen, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos = pos + s2.length(); 
        }
        fileOut << line << std::endl;
    }
    
    
}