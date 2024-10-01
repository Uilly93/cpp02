#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>
#include <ostream>
#include <cmath>
#include "colors.hpp"
#include "Fixed.hpp"

class Point{
	public:
		// Constructors
		Point();
		Point(const float x, const float y);
		Point(const Point &src);
		// Destrsuctor
		~Point();
		// Operator Overload
		Point &operator=(Point const &src);
		//methods
		Fixed const &getx() const;
		Fixed const &gety() const;

	private:
		const Fixed _x;
		const Fixed _y;
};

bool bsp(Point const &a, Point const &b, Point const &c, Point const &point);

#endif