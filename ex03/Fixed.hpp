/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:21:49 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/27 23:57:38 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed();
        Fixed( const int n );
        Fixed( const float n );
        Fixed(const Fixed& copy);
        ~Fixed();
        Fixed&  operator=(const Fixed& rhs);

        int     getRawBits() const;
        void    setRawBits( int const raw );

        float   toFloat() const;
        int     toInt() const;

        bool operator>(Fixed const& a)const;
        bool operator<(Fixed const& a)const;
        bool operator>=(Fixed const& a)const;
        bool operator<=(Fixed const& a)const;
        bool operator==(Fixed const& a)const;
        bool operator!=(Fixed const& a)const;

        Fixed operator+(Fixed const& a)const;
        Fixed operator-(Fixed const& a)const;
        Fixed operator*(Fixed const& a)const;
        Fixed operator/(Fixed const& a)const;

        const Fixed& operator++(void);
        const Fixed operator++(int);
        const Fixed& operator--(void);
        const Fixed operator--(int);

        static Fixed& min(Fixed& a,Fixed& b);
        static const Fixed& min(const Fixed& a,const Fixed& b);
        static Fixed& max(Fixed& a,Fixed& b);
        static const Fixed & max(const Fixed & a,const Fixed & b);
            
    private:
        int              fixed;
        static const int fractional;
};

std::ostream& operator<<(std::ostream& out, const Fixed& rhs);

#endif