#ifndef __ZOMBIE_HORDE_HPP__
#define __ZOMBIE_HORDE_HPP__

#include "Zombie.hpp"

class ZombieHorde {
public:
	ZombieHorde(int N);
	~ZombieHorde();

	void announce();
private:
	int number_;
	Zombie* zombies_;
};

#endif
