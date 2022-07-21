#include "PhoneBook.hpp"

int main()
{
	std::string cmd;
	PhoneBook book;
	int contact_num = 0;

	while (1)
	{
		std::cout << "Enter ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, cmd);
		if(cmd.compare("EXIT") == 0)
			break;
		else if(cmd.compare("ADD") == 0)
		{
			book.add_contact(contact_num);
			contact_num++;
			if(contact_num >= 8)
				contact_num = 0;
		}
		else if(cmd.compare("SEARCH") == 0)
		{
			if (book.display_contact_list() == 0)
				book.display_contact_info();
		}
	}
	std::cout << "Goodbye" << std::endl;
	return (0);
}