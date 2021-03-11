#ifndef __HUMAN_HPP__
#define __HUMAN_HPP__

#include "Brain.hpp"
#include "string"

class Human {
	public:
		std::string identify();
		const Brain& getBrain();

	private:
		const Brain brain = Brain();
};

#endif
