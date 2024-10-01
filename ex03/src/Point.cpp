#include "../includes/Point.hpp"
#include <cmath>

Point::Point(): _x(), _y(){
}

Point::Point(const float x, const float y): _x(x), _y(y){
}

Point::Point(const Point &src){
	*this = src;
}
// Destrsuctor
Point::~Point(){

}
// Operator Overload
Point& Point::operator=(Point const &src){
	(void)src;
	return *this;
}

Fixed const &Point::getx() const{
	return _x;
}

Fixed const &Point::gety() const{
	return _y;
}
