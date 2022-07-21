#include "ContactClass.hpp"

Contact::Contact(void){}

Contact::~Contact(void){}

void	Contact::set_information(std::string firstname, std::string last_name,
			std::string nickname, std::string phone_number, std::string darkest_secret)
{
	_first_name = firstname;
	_last_name = last_name;
	_nickname = nickname;
	_phone_number = phone_number;
	_darkest_secret = darkest_secret;
}


std::string Contact::get_first_name(void) const
{
	return (_first_name);
}

std::string Contact::get_last_name(void) const
{
	return (_last_name);
}


std::string Contact::get_nickname(void) const
{
	return (_nickname);
}

std::string Contact::get_phone_number(void) const
{
	return (_phone_number);
}

std::string Contact::get_darkest_secret(void) const
{
	return (_darkest_secret);
}

