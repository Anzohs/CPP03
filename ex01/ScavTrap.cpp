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

ScavTrap::ScavTrap(std::string n) : ClapTrap(n){
	this->name = n;
	this->energy = 50;
	this->attack_damage = 20;
	this->hit_points = 100;
	std::cout << "ScavTrap was created\n";
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap was destroyed \n";
}

void ScavTrap::attack(const std::string& target){
	std::cout << "ScavTrap " << this->name << " attacks " << target;
	std::cout << ", causing an hopping " << this->attack_damage << " points of damage!\n";
}

void ScavTrap::guardGate(void){
	std::cout << "Guarding the gate\n";
}
