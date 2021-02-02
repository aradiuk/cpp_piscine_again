#ifndef __PONY_HPP__
#define __PONY_HPP__

#include <iostream>

class Pony {
	std::string name;
public:
	Pony(const std::string& name);
	void sayHello();
};

#endif 

