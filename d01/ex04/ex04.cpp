#include <iostream>

int main()
{
	std::string str{"HI THIS IS BRAIN"};
	std::string *pStr = &str;
	std::string &rStr = str;

	std::cout << "String: " << str
			  << ", Pointer: "<< *pStr
		      << ", Reference: " << rStr
			  << std::endl;

	(*pStr)[2] = '_';
	rStr[7] = '_';

	std::cout << "String: " << str
			  << ", Pointer: "<< *pStr
		      << ", Reference: " << rStr
			  << std::endl;
}
