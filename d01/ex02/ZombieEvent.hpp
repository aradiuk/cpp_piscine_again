#ifndef __ZOMBIE_EVENT_HPP
#define __ZOMBIE_EVENT_HPP

#include "Zombie.hpp"
#include <iostream>

class ZombieEvent
{
public:
	void setZombieType(ZombieType type);
	Zombie* newZombie(const std::string& name);
	Zombie* randomChump();
private:
	ZombieType type_;
};

#endif
