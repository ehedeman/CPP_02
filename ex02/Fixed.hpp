/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:40:07 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/17 13:28:36 by ehedeman         ###   ########.fr       */
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
	
	Fixed	operator+(Fixed const &fix);
	Fixed	operator-(Fixed const &fix);
	Fixed	operator*(Fixed const &fix);
	Fixed	operator/(Fixed const &fix);
	
	Fixed	operator<(Fixed const &fix);
	Fixed	operator>(Fixed const &fix);
	Fixed	operator>=(Fixed const &fix);
	Fixed	operator<=(Fixed const &fix);
	Fixed	operator==(Fixed const &fix);
	Fixed	operator!=(Fixed const &fix);
	
	Fixed	operator++(int i); //post increment
	Fixed	operator--(int i);
	Fixed	&operator++(); //pre increment
	Fixed	&operator--();
	
	static Fixed	&min(Fixed &a, Fixed &b);
	static Fixed	const &min(const Fixed &a, const Fixed &b);
	static Fixed	&max(Fixed &a, Fixed &b);
	static Fixed	const &max(const Fixed &a, const Fixed &b);
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif