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

ClapTrap::ClapTrap(void){
	this->name = "";
	std::cout << "Default Constructor called\n";
};

ClapTrap::ClapTrap(std::string name) : hit_points(10), energy(10), attack_damage(0)
{
	this->name = name;
	std::cout << "Constructor called\n";
}

ClapTrap::~ClapTrap(void){
	std::cout << "Destructor called\n";
}

ClapTrap ClapTrap::operator=(const ClapTrap& other)
{
	if (this == &other)
		return (*this);
	this->name = other.getName();
	this->hit_points = other.getHitPoints();
	this->energy = other.getEnergy();
	this->attack_damage = other.getAttackDamage();
	std::cout << "Operator = called\n";
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	this->name = other.getName();
	this->hit_points = other.getHitPoints();
	this->energy = other.getEnergy();
	this->attack_damage = other.getAttackDamage();
	std::cout << "Copy Constructor called\n";
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hit_points <= 0 || this->energy <= 0)
		return (std::cout << "ClapTrap " << this->getName() << " can't attack ", (void)target);
	std::cout << "ClapTrap " << this->getName() << " attacks " << target;
	std::cout << ", causing " << this->getAttackDamage() << " points of damage!";
	this->energy--;
}

void	ClapTrap::takeDamage(unsigned int damage)
{
	if (this->hit_points <= 0)
		return (std::cout << "ClapTrap " << this->getName() << " is already dead\n", (void)damage);
	if (damage > this->hit_points)
		this->hit_points = 0;
	else
		this->hit_points -= damage;
	std::cout << "ClapTrap " << this->getName() << " took " << damage << " points of damage!";
}


std::string	ClapTrap::getName(void)const {return this->name;}
unsigned int	ClapTrap::getHitPoints(void)const{return this->hit_points;}
unsigned int	ClapTrap::getEnergy(void)const{return this->energy;}
unsigned int	ClapTrap::getAttackDamage(void)const{return this->attack_damage;}
