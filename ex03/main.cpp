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

int main(int ac, char *argv[])
{
	ClapTrap c = ClapTrap("Mario");
	
	c.attack("Luigi");
	c.takeDamage(1);
	c.beRepaired(100);
	c.takeDamage(1000);
}
