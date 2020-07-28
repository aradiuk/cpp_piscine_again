#include "Contact.hpp"

Contact::Contact()
	: firstName("")
	, lastName("")
	, phoneNumber("")
{}

Contact::Contact(std::string first, std::string last, std::string phone)
	: firstName(first)
	, lastName(last)
	, phoneNumber(phone)
{}

Contact::~Contact()
{}
