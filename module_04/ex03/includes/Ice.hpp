/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:04:58 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/05 16:26:03 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

# include "AMateria.hpp"

class Ice : virtual public AMateria 
{
	public:
		Ice();
		Ice(const Ice & src); 
		Ice &operator=(const Ice &rhs);
		~Ice();
		Ice *clone() const;
};

#endif