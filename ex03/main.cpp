/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:40:19 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/18 15:26:42 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main()
{	
	const Point P(4.1, 4.2);
	const Point a(3.5, 5.7);
	const Point b(6.8, 5.2);
	const Point c(2.1, 1.2);
	if (bsp(a, b, c, P) == true)
		std::cout << "yes" << std::endl;
	else
		std::cout << "no" << std::endl;
	return 0;
}

//https://www.rechner.club/geometrie-formen/dreieck-aus-eckpunkt-koordinaten-berechnen