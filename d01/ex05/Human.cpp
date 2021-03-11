#include "Human.hpp"

std::string Human::identify() {
	return brain.identify();
}

const Brain& Human::getBrain()
{
	return brain;
}
