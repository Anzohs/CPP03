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

ClapTrap::ClapTrap(void) : name(""), attackDamage(0), hitPoints(10), energyPoints(10) {
	std::cout << "Default constructor called \n";
};
ClapTrap::ClapTrap(std::string name): attackDamage(0), hitPoints(10), energyPoints(10){
	this->name = name;
	std::cout << "A Object of ClapTrap was created \n";
};
ClapTrap::ClapTrap(const ClapTrap& other)
{
	this->attackDamage = other.attackDamage;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->name = other.name;
	std::cout << "Copy Constructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
	if (this == &other)
		return (*this);
	this->attackDamage = other.attackDamage;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->name = other.name;
	std::cout << "Operator = overload called \n";
	return (*this);
};

ClapTrap::~ClapTrap(void){
	std::cout << "Destructor called\n";
}

void	ClapTrap::attack(const std::string& target){
	
	if (this->hitPoints <= 0 || this->energyPoints <= 0)
		return (std::cout << "ClapTrap " << this->getName() << " can't attack\n", (void)target);
	std::cout << "ClapTrap " << this->getName() << " attacks " << target;
	std::cout << ", causing " << this->getAttackDamage() << " points of damage!\n";
	this->energyPoints--;
};

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints <= 0)
		return (std::cout << "ClapTrap " << this->getName() << " is already dead\n", (void)amount);
	if (amount > this->hitPoints)
		this->hitPoints = 0;
	else
		this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->getName() << " took " << amount << " points of damage!\n";
};

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints == 0 || this->energyPoints == 0)
		return (std::cout << "ClapTrap " << this->getName() << " cant't be repaired\n", (void)amount);
	std::cout << "ClapTrap " << this->getName() << " is repairing itself for " << amount << " hit points\n";
	this->energyPoints--;
	if (this->hitPoints >  std::numeric_limits<unsigned int>::max() - amount)
		this->hitPoints = std::numeric_limits<unsigned int>::max();
	else
		this->hitPoints += amount;
};
		
std::string		ClapTrap::getName(void){return (this->name);};
unsigned int	ClapTrap::getHealth(void){return (this->hitPoints);}
unsigned int	ClapTrap::getAttackDamage(void){return (this->attackDamage);}