#include <string> 

class Contact {
public:
	Contact();
	Contact(std::string first, std::string last, std::string phone);
	~Contact();

	std::string firstName;
	std::string lastName;
	std::string phoneNumber;
};
