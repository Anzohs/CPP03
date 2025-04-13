#pragma once

#include "ClapTrap.h"

class FragTrap: private ClapTrap{
	public:
		FragTrap(std::string n);
		FragTrap operator=(const FragTrap& other);
		FragTrap(const FragTrap& other);
		~FragTrap(void);
		void highFiveGuys(void) const;
	private:
};
