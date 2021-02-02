#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <string> 

enum class ZombieType {
	generic,
	poison,
	ice,
	fire
};

class Zombie {
public:
	Zombie();
	~Zombie();
	Zombie(const Zombie& zombie);
	Zombie& operator=(const Zombie& zombie);
	void announce();

	std::string getName() const;
	ZombieType getType() const;
	void setName(const std::string& name);
	void setType(ZombieType type);
private:
	std::string name_;
	ZombieType type_;
};

#endif
