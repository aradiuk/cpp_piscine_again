#include "Zombie.hpp"
#include <iostream>

static std::string typeToString(ZombieType type)
{
	switch (type) {
		case ZombieType::generic:
			return "generic";
		case ZombieType::ice:
			return "ice";
		case ZombieType::poison:
			return "poison";
		case ZombieType::fire:
			return "fire";
		default:
			return "type";
	}
}

Zombie::Zombie() : name_("Zombie"), type_(ZombieType::generic)
{}

Zombie::~Zombie()
{}

Zombie::Zombie(const Zombie& zombie)
{
	if (&zombie != this) {
		name_ = zombie.getName();
		type_ = zombie.getType();
	}
}

Zombie& Zombie::operator=(const Zombie& zombie) 
{
	name_ = zombie.getName();
	return *this;
}

std::string Zombie::getName() const
{
	return name_;
}

ZombieType Zombie::getType() const
{
	return type_;
}

void Zombie::setName(const std::string& name)
{
	name_ = name;
}

void Zombie::setType(ZombieType type)
{
	type_ = type;
}

void Zombie::announce()
{
	std::cout << name_ << "(" << typeToString(type_) << "): Brains?" << std::endl;
}
