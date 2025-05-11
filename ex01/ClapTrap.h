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

typedef char* string;

class ClapTrap{
    protected:
        ClapTrap(void);
        std::string name;
        unsigned int hit_points; //health
        unsigned int energy;
        unsigned int attack_damage;
    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap& other);
        ClapTrap    operator=(const ClapTrap& other);
        void        attack(const std::string& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        unsigned int	getHitPoints(void)const;
        unsigned int	getEnergy(void)const;
        unsigned int	getAttackDamage(void)const;
        std::string getName(void)const;
};
