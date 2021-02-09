#include "ZombieEvent.hpp"

int main()
{
	Zombie first;
	std::cout << "A default zombie on stack announces itself: " << std::endl;
	first.announce();

	first.setName("first");
	first.setType(ZombieType::fire);

	std::cout << "A custom zombie on stack announces itself: " << std::endl;
	first.announce();

	ZombieEvent event;
	event.setZombieType(ZombieType::generic);
	Zombie* second = event.newZombie("second");
	std::cout << "A bit custom zombie on heap announces itself: " << std::endl;
	second->announce();
	second->setType(ZombieType::ice);
	std::cout << "A little different zombie on heap announces itself: " << std::endl;
	second->announce();

	std::cout << "Four random zombies on heap announce themselves: " << std::endl;
	Zombie* third = event.randomChump();
	Zombie* fourth = event.randomChump();
	Zombie* fifth = event.randomChump();
	Zombie* sixth = event.randomChump();

	delete second;
	delete third;	
	delete fourth;	
	delete fifth;	
	delete sixth;	
}
