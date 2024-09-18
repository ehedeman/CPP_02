/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:05:23 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/18 15:19:02 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float getA(const Point p1, const Point p2, const Point p3)
{
	/*
	general way to calculate Area of triangle:
	A = [x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)] /2
	Now for this project:
	A = 	(
			p1.x * (p2.y - p3.y) +
			p2.x * (p3.y - p1.y) +
			p3.x * (p1.y - p2.y)
			)/ 2
	Now code:
	*/
	float A;
	
	A = (
		p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat())	+
		p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat())	+
		p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat())
		) / 2;
	
	if (A >= 0)
		return (A);
	else
		return (A * -1);
	/*
	can be a negative value (thats valid, but
	nothing we can work with. so make positive)
	*/
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	//comparison area aka how big its supposed to be
	float a0 = getA(a, b, c);
	//now all possible triangle combinations with point as corner
	float a1 = getA(point, a, b);
	float a2 = getA(point, b, c);
	float a3 = getA(point, a, c);
	
	//if one of the areas is 0 then its not a triangle but a line
	if (a1 == 0 || a2 == 0 || a3 == 0)
		return (false);
	else if (a1 + a2 + a3 == a0)
		return (true);
	//if the three possible triangles add to the big one, then point is most likely
	//within the triangle. if thats not the case (smaller/bigger) then its outside
	return (false);
}