/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:40:07 by ehedeman          #+#    #+#             */
/*   Updated: 2024/09/13 15:35:38 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:

	int					value;
	static const int	bits;

public:

	Fixed( void );		//constructor
	~Fixed();			//deconstructor
	Fixed(const Fixed & fix); //copy constructor
	Fixed &operator=(const Fixed &fix);//overloaded operators (change name later)
	
	int		getRawBits(void)const;
	void	setRawBits(int const raw);
};