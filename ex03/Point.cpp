/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 22:15:44 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/27 23:45:22 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0),y(0){}

Point::Point(const float x, const float y):x(x),y(y)
{}

Point::Point(const Point& cpy): x(cpy.x), y(cpy.y)
        {}

Point::~Point(){}

Point& Point::operator=(const Point& rhs)
{
    if(this != &rhs)
    {
        ( Fixed )this->x = rhs.getX();
        ( Fixed )this->y = rhs.getY();
    }
    return *this;
}

Fixed Point::getX( void )const
{
    return this->x;
}

Fixed Point::getY( void )const
{
    return this->y;
}