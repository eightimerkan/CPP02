/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:21:49 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/21 18:11:15 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed& copy);
        ~Fixed();
        Fixed& operator=(const Fixed& rhs);
        int getRawBits(void) const;
        void setRawBits( int const raw );
    private:
        int fixed;
        static const int fractional;
};


#endif