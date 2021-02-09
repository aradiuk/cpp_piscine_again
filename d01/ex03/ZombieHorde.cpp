#include "ZombieHorde.hpp"
#include <iostream>

static std::string randomName()
{
	switch (rand() % 5) {
		case 0:
			return "Boomer"; 
		case 1:
			return "Smoker";
		case 2:
			return "Jokey";
		case 3:
			return "Spitter";
		case 4:
			return "Tank";
		default:
			return "Human";
	}
}

ZombieHorde::ZombieHorde(int N) : number_(N)
{
	if (N <= 0) {
		std::cout << "The horde is a lie." << std::endl;
	} else {
		std::cout << "Creating " << N << " zombies_." << std::endl;
		zombies_ = new Zombie[N];
		for (int i = 0; i < N; ++i) {
			zombies_[i].setName(randomName());
		}
		announce();
	}
}

void ZombieHorde::announce()
{
	for (int i = 0; i < number_; ++i) {
		zombies_[i].announce();
	}
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "Destroying zombies L4D2 style if there are any (" << number_ << ")." << std::endl;
	if (number_ > 0) {
		delete[] zombies_;
	}
}

