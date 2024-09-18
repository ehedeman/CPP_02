/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:40:07 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/18 11:19:46 by ehedeman         ###   ########.fr       */
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
	Fixed &operator=(const Fixed &fix);

	float	operator+(Fixed const &fix);
	float	operator-(Fixed const &fix);
	float	operator*(Fixed const &fix);
	float	operator/(Fixed const &fix);
	
	bool	operator<(Fixed const &fix);
	bool	operator>(Fixed const &fix);
	bool	operator>=(Fixed const &fix);
	bool	operator<=(Fixed const &fix);
	bool	operator==(Fixed const &fix);
	bool	operator!=(Fixed const &fix);
	
	Fixed	operator++(int); //post increment
	Fixed	operator--(int);
	Fixed	&operator++(); //pre increment
	Fixed	&operator--();
	
	static Fixed		&min(Fixed &a, Fixed &b);
	static const Fixed	&min(const Fixed &a, const Fixed &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static const Fixed	&max(const Fixed &a, const Fixed &b);
	int					getRawBits(void)const;
	void				setRawBits(int const raw);
	float				toFloat( void ) const;
	int 				toInt( void ) const;
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif