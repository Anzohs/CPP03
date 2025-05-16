/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 20:09:51 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/15 20:22:39 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <limits>

typedef char* string;

class ClapTrap{
	protected:
		std::string		name;
		unsigned int	attackDamage;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& other);
		~ClapTrap(void);
		ClapTrap& operator=(const ClapTrap& other);
		virtual void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string	getName(void);
		unsigned int	getHealth(void);
		unsigned int	getAttackDamage(void);
		unsigned int	getEnergyPoints(void);

};
