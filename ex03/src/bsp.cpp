#include "../includes/Point.hpp"


const Fixed	determinant(Point const &a, Point const &b, Point const &d){
	const Fixed det((a.getx() - d.getx()) * (b.gety() - d.gety()) - (a.gety() -d.gety()) * (b.getx() - d.getx()));
	std::cout << det << RESET << std::endl;
	return det;
}

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point){
	const Fixed det_ab = determinant(a, b, point);
	const Fixed det_bc = determinant(b, c, point);
	const Fixed det_ca = determinant(c, a, point);
	if (det_ab > 0 && det_bc > 0 && det_ca > 0)
		return true;
	return false;
}