/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:05:35 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/18 15:04:09 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP

#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:

	const Fixed x;
	const Fixed y;

public:

	Point(/* args */);
	Point(const float x_val, const float y_val);
	Point(const Point & copy);
	Point &operator=(const Point &p); //overload function for copy assignment operator
	~Point();
	
	const Fixed &getX()const;
	const Fixed &getY()const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif