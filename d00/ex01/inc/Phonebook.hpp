#include "Contact.hpp"
#include <vector>

#define PHONEBOOK_SIZE 8

class Phonebook {
public:
	Phonebook();
	~Phonebook();
	void addContact();
	void searchContact();
	void displayContacts();
	void displayContact(size_t index);
	std::string requestFirstName();
	std::string requestLastName();
    std::string requestPhoneNumber();

private:
	std::vector<Contact> contacts_;
	const size_t maxAmountOfContacts_ = 8;
};
