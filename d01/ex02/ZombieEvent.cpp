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
			zombie->setType(ZombieType::ice);
			break;
		case 1:
			zombie = newZombie("Zzombie");
			zombie->setType(ZombieType::fire);
			break;
		case 2:
			zombie = newZombie("ZzZombie");
			zombie->setType(ZombieType::poison);
			break;
		case 3:
			zombie = newZombie("ZzZzombie");
			break;
	}

	zombie->announce();
	return zombie;
}
