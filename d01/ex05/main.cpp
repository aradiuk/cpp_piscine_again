#include "Human.hpp"
#include <iostream>

int main()
{
	Human human;
	std::cout << human.identify() << std::endl;
	std::cout << human.getBrain().identify() << std::endl;
	return 0;
}
