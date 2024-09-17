/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:40:07 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/17 12:50:26 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:

	int					value;
	static const int	bits;

public:

	Fixed( void );		//constructor
	~Fixed();			//deconstructor
	Fixed(const Fixed & copy); //copy constructor
	Fixed(const int convert);
	Fixed(const float convert);
	Fixed &operator=(const Fixed &fix);//overloaded operators (change name later)
	
	int		getRawBits(void)const;
	void	setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif