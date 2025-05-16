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


DiamondTrap::DiamondTrap(void) : ClapTrap("_clap_name"){ 
}

DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n + "_clap_name"), name(n), FragTrap(n), ScavTrap(n){
} 


DiamondTrap::DiamondTrap(const DiamondTrap& other){
	this->name = other.name;
}


DiamondTrap::~DiamondTrap(){

}


DiamondTrap DiamondTrap::operator=(const DiamondTrap& other){
	if (this == &other)
			return (*this);
	this->name = other.name;
	return (*this);
}

void DiamondTrap::whoAmI(void) const{
	std::cout << "I AM: " << this->name << "\n";
	std::cout << "I AM: " << ClapTrap::name << "\n";
}
