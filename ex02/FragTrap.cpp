#include "FragTrap.h"
#include "ClapTrap.h"

FragTrap::FragTrap(std::string n) : ClapTrap(n){
	this->name = n;
	this->attackDamage = 30;
	this->energyPoints = 100;
	this->health = 100;
}

FragTrap FragTrap::operator=(const FragTrap& other){
	if (this == &other)
		return (*this);
	return (*this);
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other.name){
	this->name = other.name;
	this->attackDamage = other.attackDamage;
	this->health = other.health;
	this->energyPoints = other.energyPoints;
}

void FragTrap::highFiveGuys(void) const {
	std::cout << "Can someone give me an highFive???\n";
}
