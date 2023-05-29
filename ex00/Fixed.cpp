/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:22:29 by eightimerka       #+#    #+#             */
/*   Updated: 2023/03/17 16:08:04 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional = 8;

Fixed::Fixed()
    : fixed(0)
        {
            std::cout << "Default constructor called" << std::endl;
        }

Fixed::Fixed(const Fixed& copy)
    : fixed(copy.fixed)
        {
            std::cout << "Copy constructor called" << std::endl;
        }
        
Fixed::~Fixed()
{std::cout << "Destructor called" << std::endl;}

Fixed& Fixed::operator=(const Fixed& rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    fixed = rhs.fixed;
    return *this;
}
int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return  fixed;
}
void Fixed::setRawBits( int const raw )
{
    fixed = raw;
}