/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:40:04 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/13 15:15:26 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8; //bit amount is constant

Fixed::Fixed(/* args */)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed & fix)
{
	value = fix.value;
};