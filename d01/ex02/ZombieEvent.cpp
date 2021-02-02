#include "ZombieEvent.hpp"
#include <cstdlib>

void ZombieEvent::setZombieType(ZombieType type)
{
	type_ = type;
}

Zombie* ZombieEvent::newZombie(const std::string& name)
{
	Zombie* zombie = new Zombie();
	zombie->setName(name);
	zombie->setType(type_);
	return zombie;
}

Zombie* ZombieEvent::randomChump()
{
	Zombie* zombie;

	switch (rand() % 4) {
		case 0:
			zombie = newZombie("Zombie");
			break;
		case 1:
			zombie = newZombie("Zzombie");
			break;
		case 2:
			zombie = newZombie("ZzZombie");
			break;
		case 3:
			zombie = newZombie("ZzZzombie");
			break;
	}

	zombie->announce();
	return zombie;
}
