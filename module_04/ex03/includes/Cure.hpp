/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:04:37 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/05 16:25:57 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

# include "AMateria.hpp"

class Cure : virtual public AMateria 
{
	public:
		Cure();
		Cure(const Cure & src); 
		Cure &operator=(const Cure &rhs);
		~Cure();
		Cure *clone() const;
};

#endif