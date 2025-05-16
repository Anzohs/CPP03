/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 20:26:30 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/12 20:51:25 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

ScavTrap::ScavTrap(void){
	this->name = "";
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->hitPoints = 100;
	std::cout << "ScavTrap Default Constructor \n";
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n){
	this->name = n;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->hitPoints = 100;
	std::cout << "ScavTrap was created\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other){
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->energyPoints = other.energyPoints;
	this->hitPoints = other.hitPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap was destroyed \n";
}


void ScavTrap::guardGate(void){
	std::cout << "ScavTrap " << this->getName() << " is guarding the gate\n";
}

void ScavTrap::attack(const std::string& target){
	if (!this->energyPoints || !this->hitPoints)
	{
		std::cout << this->getName() << " can't attack!! \n";
		std::cout << "Current energy points " << this->energyPoints << "\n";
		std::cout << "Current health points " << this->hitPoints << "\n";
		return;
	}
	std::cout << this->name << " attacked " << target << " with attack power of " << this->attackDamage << "\n";
	this->energyPoints--;
}
