#include "ZombieEvent.hpp"

int main()
{
	Zombie first;
	first.announce();

	first.setName("first");
	first.setType(ZombieType::fire);

	first.announce();

	ZombieEvent event;
	event.setZombieType(ZombieType::generic);
	Zombie* second = event.newZombie("second");
	second->announce();
	second->setType(ZombieType::ice);
	second->announce();

	Zombie* third = event.randomChump();
	Zombie* fourth = event.randomChump();
	Zombie* fifth = event.randomChump();
	Zombie* sixth = event.randomChump();
	
	third->setName("a"); 
	fourth->setName("a"); 
	fifth->setName("a"); 
	sixth->setName("a"); 

}
