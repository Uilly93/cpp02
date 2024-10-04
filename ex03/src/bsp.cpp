#include "../includes/Point.hpp"
#include <algorithm>


const Fixed	determinant(Point const &a, Point const &b, Point const &d){
	const Fixed det((a.getx() - d.getx()) * (b.gety() - d.gety()) - (a.gety() -d.gety()) * (b.getx() - d.getx()));
	return det;
}

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point){
	const Fixed det_ab = determinant(a, b, point);
	const Fixed det_bc = determinant(b, c, point);
	const Fixed det_ca = determinant(c, a, point);
	if (det_ab > 0 && det_bc > 0 && det_ca > 0){
		std::cout << GREEN << "is inside the triangle" << RESET << std::endl;
		return true;
	}
	std::cout << RED << "is outside the triangle" << RESET << std::endl;
	return false;
}