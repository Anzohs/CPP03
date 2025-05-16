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


class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap(void);
		DiamondTrap(const std::string n);
		DiamondTrap& operator=(const DiamondTrap& other);
		DiamondTrap(const DiamondTrap& other);
		~DiamondTrap(void);
		void whoAmI() const;
	private:
		std::string name;
};
