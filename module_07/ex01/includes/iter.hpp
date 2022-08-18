/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:43:13 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/18 13:55:01 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>

template <typename T> void iter(T arr[], int len, T (*f)(T))
{
	for(int i = 0; i < len; i++)
	{
		arr[i] = f(arr[i]);
	}
}

#endif