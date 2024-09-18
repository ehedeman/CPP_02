/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:05:31 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/18 15:12:17 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0), y(0){}

Point::Point(const float x_val,const float y_val):x(x_val), y(y_val){}

Point::Point(const Point & copy):x(copy.getX()), y(copy.getY()){}

Point &Point::operator=(const Point &p)
{
	//just nessecary so the -Werror flag is quiet lol
	if (&p == this)
		return (*this);
	return (*this);
}

Point::~Point(){}

const Fixed     &Point::getX()const{return (this->x);}
const Fixed     &Point::getY()const{return (this->y);}