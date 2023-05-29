/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:22:29 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/27 23:59:52 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::fractional = 8;

Fixed::Fixed()
    : fixed(0)
        {
            std::cout << "Default constructor called" << std::endl;
        }

Fixed::Fixed(const int n)
    : fixed(n << fractional)
    {
        std::cout << "Int constructor called" << std::endl;
    }

Fixed::Fixed( const float n )
    : fixed( std::roundf(n * (1 << fractional)))
    {
        std::cout << "Float constructor called" << std::endl;
    }

Fixed::Fixed(const Fixed& copy)
    : fixed(copy.fixed)
        {
            std::cout << "Copy constructor called" << std::endl;
        }
        
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

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

float   Fixed::toFloat() const
{
    return static_cast<float> ( getRawBits() ) / ( 1 << fractional );
}

int Fixed::toInt() const
{
    return static_cast<int> (getRawBits() >> fractional);
}

std::ostream& operator<<(std::ostream& o, Fixed const& rhs)
{
    o << rhs.toFloat();
    return o;
}