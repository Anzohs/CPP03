#pragma once

#include <iostream>

typedef char* string;

class ClapTrap{
    private:
        int health;
        std::string name;
        int energyPoints;
        int attackDamage;
    public:
        ClapTrap(std::string n);
        ClapTrap(const ClapTrap& other);
        ClapTrap operator=(const ClapTrap& other);
        ~ClapTrap(void);
        void attack(const std::string& target);
        void damage(unsigned int amount);
        void beRepaired(unsigned int amount);

};