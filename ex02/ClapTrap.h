/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 20:09:51 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/12 20:32:17 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

typedef char* string;

class ClapTrap{
    protected:
        int health;
        std::string name;
        int energyPoints;
        int attackDamage;
				int  getHealth(void) const;
				int  getEnergyPoints(void) const;
				int  getAttackDamage(void) const;
				std::string getName(void) const;
    public:
        ClapTrap(std::string n);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
