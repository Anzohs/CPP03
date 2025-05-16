/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 20:09:57 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/12 20:14:09 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"


int main(int ac, string av[])
{
	if (ac  != 3)
	{
		std::cerr << "Please pass an argument to create a class! (with the name of the classs)\n";
		std::cerr << "Example : ./program Name_for_ClapTrap, Name_for_clap trap to attack\n";
		return (1);
	}
	ClapTrap c =  ClapTrap(av[1]);
	ClapTrap d;
	d = c;
	c.attack(av[2]);
	c.takeDamage(1);
	c.beRepaired(100);
	c.takeDamage(1000);
	c.attack(av[2]);
	return (0);
}
