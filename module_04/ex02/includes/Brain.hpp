/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 09:41:45 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/04 00:30:06 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
	protected :
		std::string ideas[100];

	public :
		Brain();
		Brain(const Brain& src);
		Brain &operator=(const Brain& rhs);
		~Brain();
		
		const std::string &getIdea(int idea_num) const;
		void	setIdeas(int rank, std::string idea);
		
};

#endif