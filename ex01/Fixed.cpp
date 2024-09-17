/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:40:04 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/17 13:05:55 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8; //bit amount is constant 8

Fixed::Fixed(/* args */): value(0)
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

Fixed::Fixed(const Fixed & copy)
{
	std::cout << "Copy construcor called." << std::endl;
	this->value = copy.getRawBits();
}

Fixed::Fixed(const int convert):value(convert << this->bits)
{
	std::cout << "Int constructor called." << std::endl;
}

Fixed::Fixed(const float convert)
{
	std::cout << "Float constructor called." << std::endl;
	this->value = roundf(convert * (1 << this->bits));
}
/*	
	ok so we're bitshifting. because to convert from float to fixed point
	you n eed to do x = float * 2^(fractional bits) and then round.
	which is basically happenign there because bitshifting with 1 is
	the equivalent to doing 2^(1).
	for integer we can just shift the thing by how many nessecary probably
	cause it consists of 8 bit already
	float doesnt (assuming thats why)
*/

Fixed &Fixed::operator=(const Fixed &fix) //this is confusing me so much
{
	std::cout << "Copy assignment operator called." <<std::endl;
	this->value = fix.getRawBits();
	return(*this);
}

int Fixed::getRawBits()const
{
	//std::cout << "getRawBits member function called." << std::endl;
	return(this->value);
}

void	Fixed::setRawBits(int bits)
{
	//std::cout << "setRawBits function called." << std::endl;
	this->value = bits;
}

float Fixed::toFloat( void )const
{
	return((float)this->value / (float)(1 << this->bits));
}

int Fixed::toInt( void )const
{
	return(this->value >> this->bits);
}
//just shifting it back

std::ostream	&operator<<(std::ostream &os, Fixed const &fixed_nbr)
{
	return (os << fixed_nbr.toFloat());
}

//thats called to overload the output stream operator
//basically you tell it what to put out if it gets a certain class

//arguments are a ostream object os and then the class you want to print
//then just put the thing into the output stream object and return it