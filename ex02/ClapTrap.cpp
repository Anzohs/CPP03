/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:46:21 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/12 19:50:17 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(std::string n): health(10), energyPoints(10), attackDamage(0){
	this->name = n;
	std::cout << "Default Constructor called\n";
}

ClapTrap::~ClapTrap(){
	std::cout << "Destrutor called!!! \n";
}

ClapTrap::ClapTrap(const ClapTrap& other){}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
	if (this == &other)
			return (*this);
	this->name = other.getName();
	this->attackDamage = other.getAttackDamage();
	this->energyPoints = other.getEnergyPoints();
	this->health = other.getHealth();
	return (*this);
}

void ClapTrap::attack(const std::string& target){
	if (!this->health)
		return;
	if (this->energyPoints == 0)
		return (std::cout << "Running low on energy points\n", (void)*this);
	this->energyPoints--;
	std::cout << "ClapTrap " << this->name << " attacks " << target;
	std::cout << ", causing " << this->attackDamage << " points of damage!\n";
}
void ClapTrap::takeDamage(unsigned int amount){
	if (this->health ==  0)
		return (std::cout << "Already dead \n", (void)*this);
	this->health - amount <= 0 ? this->health = 0 : this->health -= amount ;
}
void ClapTrap::beRepaired(unsigned int amount){
	if (!this->health)
		return;
	if (this->energyPoints == 0)
		return (std::cout << "Running low on energy points\n", (void)*this);
	this->energyPoints--;
	this->health += amount;
}

int ClapTrap::getHealth(void) const {return (this->health);}
int ClapTrap::getEnergyPoints(void)const {return (this->energyPoints);}
int ClapTrap::getAttackDamage(void) const {return (this->attackDamage);}
std::string ClapTrap::getName(void) const {return (this->name);}
