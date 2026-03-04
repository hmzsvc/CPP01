#ifndef REPLACE_HPP
#define REPLACE_HPP
#include <fstream>
#include <iostream>
#include <string>

class Replacer
{
    private:
        std::string filename;
        std::string s1;
        std::string s2;
    public:
        Replacer(std::string filename, std::string s1, std::string s2);
        ~Replacer();
        void replace();
};


#endif