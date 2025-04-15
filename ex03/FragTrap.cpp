/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:15:22 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/15 17:25:31 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap(void) : ClapTrap(){
	this->attackDamage = 30;
	this->energyPoints = 100;
	this->health = 100;
	std::cout << "FragTrap default construct called\n";
}

FragTrap::FragTrap(std::string n) : ClapTrap(n){
	this->name = n;
	this->attackDamage = 30;
	this->energyPoints = 100;
	this->health = 100;
	std::cout << "FragTrap Class was created\n";
}

FragTrap FragTrap::operator=(const FragTrap& other){
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->attackDamage = other.attackDamage;
	this->energyPoints = other.energyPoints;
	this->health = other.health;
	return (*this);
	std::cout << "Copy operator called \n";
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other.name){
	this->name = other.name;
	this->attackDamage = other.attackDamage;
	this->health = other.health;
	this->energyPoints = other.energyPoints;
	std::cout << "Copy constructor called \n";
}

void FragTrap::highFiveGuys(void) const {
	std::cout << "Can someone give me an highFive???\n";
}
