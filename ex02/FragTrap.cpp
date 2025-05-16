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
	this->hitPoints = 100;
	this->name = "";
	std::cout << "FragTrap default construct called\n";
}

FragTrap::~FragTrap(void){
	std::cout << "FragTrap was destroyed \n"; 
}

FragTrap::FragTrap(std::string n) : ClapTrap(n){
	this->name = n;
	this->attackDamage = 30;
	this->energyPoints = 100;
	this->hitPoints = 100;
	std::cout << "FragTrap Class was created\n";
}

FragTrap& FragTrap::operator=(const FragTrap& other){
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->attackDamage = other.attackDamage;
	this->energyPoints = other.energyPoints;
	this->hitPoints = other.hitPoints;
	std::cout << "FragTrap operator = called \n";
	return (*this);
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other.name)
{
	this->name = other.name;
	this->attackDamage = other.attackDamage;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	std::cout << "FragTrap Copy constructor called \n";
}

void FragTrap::highFiveGuys(void) const {
	if (!this->hitPoints)
	{
		std::cout << "Too bat it's d...  " << this->name << " would love to high five someone\n";
		return ;
	}
	std::cout << "Can someone give me an highFive??? " << this->name << "\n";
}
