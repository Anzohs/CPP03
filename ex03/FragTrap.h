/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:14:30 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/15 17:18:15 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.h"

class FragTrap: private ClapTrap{
	public:
		FragTrap(void);
		FragTrap(std::string n);
		FragTrap operator=(const FragTrap& other);
		FragTrap(const FragTrap& other);
		~FragTrap(void);
		void highFiveGuys(void) const;
	private:
};
