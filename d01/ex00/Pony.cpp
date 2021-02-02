#include "Pony.hpp"

Pony::Pony(const std::string &name) : name(name)
{}
void Pony::sayHello() {
	std::cout << "Pony " << name << " says hello" << std::endl;
}
