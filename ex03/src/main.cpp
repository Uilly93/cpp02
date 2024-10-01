#include <iostream>
#include "../includes/Point.hpp"

int main( void ) {
	//main test
	const Point a(4, 4);
	const Point b(0, 0);
	const Point c(4, 0);
	const Point d(3, 2);
	return bsp(a, b, c, d);

	return 0;
}