/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:22:29 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/28 00:00:32 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::fractional = 8;

Fixed::Fixed()
    : fixed(0)
        {}

Fixed::Fixed(const int n)
    : fixed(n << fractional)
    {}

Fixed::Fixed( const float n )
    : fixed( std::roundf(n * (1 << fractional)))
    {}

Fixed::Fixed(const Fixed& copy):fixed(copy.fixed)
        {}
        
Fixed::~Fixed()
{}

Fixed& Fixed::operator=(const Fixed& rhs)
{
    fixed = rhs.fixed;
    return *this;
}

int Fixed::getRawBits() const
{
    return  fixed;
}

void Fixed::setRawBits( int const raw )
{
    fixed = raw;
}

float   Fixed::toFloat() const
{
    return static_cast<float> ( this->getRawBits() ) / ( 1 << fractional );
}

int Fixed::toInt() const
{
    return static_cast<int> (this->getRawBits() >> fractional);
}

std::ostream& operator<<(std::ostream& o, Fixed const& rhs)
{
    o << rhs.toFloat();
    return o;
}


bool Fixed::operator>(Fixed const& a)const
{
    return this->getRawBits() > a.getRawBits();
}

bool Fixed::operator<(Fixed const& a)const
{
    return this->getRawBits() < a.getRawBits();
}

bool Fixed::operator>=(Fixed const& a)const
{
    return this->getRawBits() >= a.getRawBits();
}

bool Fixed::operator<=(Fixed const& a)const
{
    return this->getRawBits() <= a.getRawBits();
}

bool Fixed::operator==(Fixed const& a)const
{
    return this->getRawBits() == a.getRawBits();
}

bool Fixed::operator!=(Fixed const& a)const
{
    return this->getRawBits() != a.getRawBits();
}

Fixed Fixed::operator+(Fixed const& a)const
{
    return Fixed(this->toFloat() + a.toFloat());
}

Fixed Fixed::operator-(Fixed const& a)const
{
    return Fixed(this->toFloat() - a.toFloat());
}

Fixed Fixed::operator*(Fixed const& a)const
{
    return Fixed(this->toFloat() * a.toFloat());
}

Fixed Fixed::operator/(Fixed const& a)const
{
    return Fixed(this->toFloat() / a.toFloat());
}

const Fixed& Fixed::operator++(void)
{
    ++(this->fixed);
    return *this;
}

const Fixed Fixed::operator++(int)
{
    Fixed tmp( *this );
    tmp.fixed = this->fixed++;
    return tmp;
}

const Fixed& Fixed::operator--(void)
{
    --(this->fixed);
    return *this;
}

const Fixed Fixed::operator--(int)
{
    Fixed tmp( *this );
    tmp.fixed = this->fixed--;
    return tmp;
}

Fixed& Fixed::min(Fixed& a,Fixed& b)
{
    if(a.getRawBits() > b.getRawBits())
        return b;
    return a;
}

const Fixed& Fixed::min(const Fixed& a,const Fixed& b)
{
    if(a.getRawBits() > b.getRawBits())
        return b;
    return a;
}

Fixed& Fixed::max(Fixed& a,Fixed& b)
{
    if(a.getRawBits() < b.getRawBits())
        return b;
    return a;
}

const Fixed& Fixed::max(const Fixed & a,const Fixed & b)
{
    if(a.getRawBits() < b.getRawBits())
        return b;
    return a;
}

