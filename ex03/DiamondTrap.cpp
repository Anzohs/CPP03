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


DiamondTrap::DiamondTrap(void) : ClapTrap(""){ 
}

DiamondTrap::DiamondTrap(std::string n) : FragTrap(n), ScavTrap(n){
	this->name = n;
} 


DiamondTrap::DiamondTrap(const DiamondTrap& other){
	this->name = other.name;
	this->health = other.health;
	this->attackDamage = other.attackDamage;
	this->energyPoints = other.energyPoints;
}


DiamondTrap::~DiamondTrap(){

}


DiamondTrap DiamondTrap::operator=(const DiamondTrap& other){
	if (this == &other)
			return (*this);
	this->name = other.name;
	this->health = other.health;
	this->attackDamage = other.attackDamage;
	this->energyPoints = other.energyPoints;
	return (*this);
}

void DiamondTrap::attack(void) const{
	this->attack();
}

void DiamondTrap::whoAmI(void) const{
	std::cout << "I AM: " << this->name << "\n";
}
