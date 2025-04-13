/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 20:18:30 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/12 20:50:02 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.h"

class ScavTrap : public ClapTrap{
	public:
		ScavTrap(std::string n);
		~ScavTrap(void);
		ScavTrap(const ScavTrap& other);
		ScavTrap operator=(const ScavTrap& other);
		void guardGate();
		void attack(const std::string& target);

};
