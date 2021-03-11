#include "Brain.hpp"

#include <sstream>

std::string Brain::identify() const
{
	std::stringstream ss;
	ss << std::hex << this;
	return ss.str();
}
