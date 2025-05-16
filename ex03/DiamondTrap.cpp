/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:47:46 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/15 18:46:25 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.h"
#include "ClapTrap.h"
#include "FragTrap.h"
#include "ScavTrap.h"

DiamondTrap::DiamondTrap(void) : ClapTrap("_clap_name"), ScavTrap(), FragTrap() ,name("") {
	this->attackDamage = FragTrap::attackDamage;
	this->energyPoints = ScavTrap::energyPoints;
	this->hitPoints = FragTrap::hitPoints;
	std::cout << "DiamondTrap default constructor called\n";
}

DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n + "_clap_name"), ScavTrap(n), FragTrap(n),  name(n){
	ClapTrap::name = n + "_clap_name";
	this->attackDamage = FragTrap::attackDamage;
	this->energyPoints = ScavTrap::energyPoints;
	this->hitPoints = FragTrap::hitPoints;
	std::cout << "Object of Diamond trap was created \n";
}


DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other.name + "_clap_name"), ScavTrap(), FragTrap(),  name(other.name) {
	this->attackDamage = other.attackDamage;
	this->energyPoints = other.energyPoints;
	this->hitPoints = other.hitPoints;
	std::cout << "DiamondTrap copy constructor called\n";
}


DiamondTrap::~DiamondTrap(){
	std::cout << "Diamond trap will die " << this->name << "\n";
}


DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	if (this == &other)
			return (*this);
	this->name = other.name;
	ClapTrap::name = this->name + "_clap_name";
	this->energyPoints = other.energyPoints;
	this->hitPoints = other.hitPoints;
	std::cout << "DiamondTrap assignment operator called\n";
	return (*this);
}

void DiamondTrap::whoAmI(void) const{
	std::cout << "I AM: " << this->name << "\n";
	std::cout << "I AM: " << ClapTrap::name << "\n";
}
