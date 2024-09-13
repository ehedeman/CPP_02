/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:40:04 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/13 17:03:24 by ehedeman         ###   ########.fr       */
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

Fixed::Fixed(const Fixed & fix)
{
	std::cout << "Copy construcor called." << std::endl;
	this->value = fix.getRawBits();
}

Fixed::Fixed(const int convert)
{
	std::cout << "Convert int constructor called." << std::endl;
	//needs to convert the convert value to its fixed point value
}

Fixed::Fixed(const float convert)
{
	std::cout << "Convert float constructor called." << std::endl;
	//needs to convert the convert value to its fixed point value
}

Fixed &Fixed::operator=(const Fixed &fix) //this is confusing me so much
{
	std::cout << "Copy assignment operator called." <<std::endl;
	this->value = fix.getRawBits();
	return(*this);
}

int Fixed::getRawBits()const
{
	std::cout << "getRawBits member function called." << std::endl;
	return(this->value);
}

void	Fixed::setRawBits(int bits)
{
	std::cout << "setRawBits function called." << std::endl;
	this->value = bits;
}

float Fixed::toFloat( void )const
{
	//fixed point to float
}

int Fixed::toInt( void )const
{
	//fixed point to int
}