/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 20:56:03 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/27 23:57:14 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    public:
    Point();
    Point(const float x, const float y);
    Point(const Point& cpy);
    ~Point();

    Point& operator=(const Point& rhs);

    Fixed getX( void )const;
    Fixed getY( void )const;

    private:
    const Fixed x;
    const Fixed y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif