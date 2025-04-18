/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:04:33 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/15 18:42:36 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "FragTrap.h"
#include "ScavTrap.h"


class DiamondTrap : protected ScavTrap, protected FragTrap {
	public:
		DiamondTrap(void);
		DiamondTrap(std::string n);
		DiamondTrap operator=(const DiamondTrap& other);
		DiamondTrap(const DiamondTrap& other);
		~DiamondTrap();
		void attack() const;
		void whoAmI() const;
	private:
		std::string name;
		int health;
		int attackDamage;
		int energyPoints;
};
