#include "Phonebook.hpp"
#include <iostream>

int main()
{
	Phonebook phoneBook;

	std::string command;
	std::cout << "Waiting for input..." << std::endl;
	while (std::cin >> command) {
		if (command == "ADD")	{
			phoneBook.addContact();
		} else if (command == "SEARCH") {
			phoneBook.searchContact();
		} else if (command == "EXIT") {
			std::cout << "Thank you for using our AwesomePhoneBook app" << std::endl;
			return 0;
		}
		std::cout << "Waiting for input..." << std::endl;
	}
}
