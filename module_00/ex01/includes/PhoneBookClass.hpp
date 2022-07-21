#ifndef PHONEBOOKCLASS_HPP
# define PHONEBOOKCLASS_HPP

# include "ContactClass.hpp"
# include <stdlib.h>
# include <iomanip>

class PhoneBook 
{
	private :
		Contact	_contacts[8];
		static int	_nb_contact;

	public :
		PhoneBook (void);
		~PhoneBook (void);
		void	add_contact(int i);
		void	display_contact_info(void) const;
		int		display_contact_list(void) const;
};

#endif