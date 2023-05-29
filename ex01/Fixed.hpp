/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:21:49 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/27 17:14:16 by eightimerka      ###   ########.fr       */
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
        
    private:
        int fixed;
        static const int fractional;
};

std::ostream& operator<<(std::ostream& out, const Fixed& rhs);

#endif