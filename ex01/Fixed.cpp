/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:40:04 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/13 16:46:31 by ehedeman         ###   ########.fr       */
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