/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:53:11 by nburat-d          #+#    #+#             */
/*   Updated: 2022/07/21 17:53:12 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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