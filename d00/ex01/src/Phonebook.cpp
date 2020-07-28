#include "Phonebook.hpp"
#include <iostream>
#include <limits>


Phonebook::Phonebook()
{}

Phonebook::~Phonebook()
{}

void Phonebook::addContact()
{
	if (contacts_.size() < maxAmountOfContacts_) {
		contacts_.push_back(Contact(requestFirstName(),
	 							    requestLastName(),
								    requestPhoneNumber()));
		std::cout << "Contact (" +
					  contacts_.back().firstName +
					  ", " +
					  contacts_.back().lastName +
				      ") was successfully added" << std::endl;
	} else {
		std::cout << "Sorry, but trial version of this app allows only 8 contacts to be added. Feel free to upgrade to a premium version, though. Only for 4.99$" << std::endl;
	}
}

void Phonebook::searchContact()
{
	displayContacts();
	std::cout << "Which contact would you like to see? [1-8]: ";
	size_t index;
	while (!(std::cin >> index) ||
		index < 1 || index > 8 || contacts_.size() < index) {
		std::cout << "Wrong index. Try again. [1-8]: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	displayContact(index); 
}

void Phonebook::displayContact(size_t index)
{
	try {
		const Contact& contact = contacts_.at(index - 1);
		std::cout << "First name: " << contact.firstName << std::endl;
		std::cout << "Last name: " << contact.lastName << std::endl;
		std::cout << "Phone number: " << contact.phoneNumber << std::endl;
	} catch (const std::exception& ex) {
		std::cout << "No contact with such index: " << index;
	}
}

void Phonebook::displayContacts()
{
	const std::string header = "|     index|first name| last name|";
	int i = 1;
	std::cout << header << std::endl;
	for (const auto& contact : contacts_) {
		std::cout << "|";
		std::cout.width(10);
		std::cout << std::right << i++ << "|";
		if (contact.firstName.length() > 10) {
			std::cout.width(9);
			std::cout << std::right << contact.firstName.substr(0, 9) << ".";
			std::cout << "|";
		} else {
			std::cout.width(10);
			std::cout << std::right << contact.firstName << "|";
		}
		if (contact.lastName.length() > 10) {
			std::cout.width(9);
			std::cout << std::right << contact.lastName.substr(0, 9) << ".";
			std::cout << "|";
		} else {
			std::cout.width(10);
			std::cout << std::right << contact.lastName << "|";
		}
		std::cout << std::endl;
	}
}
std::string Phonebook::requestFirstName()
{
	std::string firstName;
	std::cout << "Please type your first name here:";
	std::cin >> firstName;
	return firstName;
}

std::string Phonebook::requestLastName()
{
	std::string lastName;
	std::cout << "Please type your last name here:";
	std::cin >> lastName;
	return lastName;
}

std::string Phonebook::requestPhoneNumber()
{
	std::string phoneNumber;
	std::cout << "Please type your phone number here:";
	std::cin >> phoneNumber;
	return phoneNumber;
}
