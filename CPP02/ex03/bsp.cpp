/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:41:38 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/18 18:56:30 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"
#include "Fixed.hpp"


Fixed	getTriangleArea( Point const a, Point const b, Point const c )
{
	Fixed	area = a.getX() * (b.getY() - c.getY())
		+ b.getX() * (c.getY() - a.getY())
		+ c.getX() * (a.getY() - b.getY()) / 2;
	Fixed	absArea( abs( area.toFloat() ) );
	return ( absArea );
}

bool bsp( Point const a, Point const b, Point const c, Point const p )
{
	Fixed	areaTriangle = getTriangleArea(a, b, c);
	Fixed	areaPAB = getTriangleArea(p, a, b);
	Fixed	areaPBC = getTriangleArea(p, b, c);
	Fixed	areaPAC = getTriangleArea(p, a, c);

	if ( areaPAB != 0 && areaPBC != 0 && areaPBC != 0
		&& areaPAB + areaPBC + areaPAC <= areaTriangle )
		return ( true );
	return ( false );
}
