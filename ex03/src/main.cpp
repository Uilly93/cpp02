#include <iostream>
#include "../includes/Point.hpp"

int main( void ) {
	//main test

	//Triangle point:
	const Point a(-2.3f, 4);
	const Point b(-4.68f, 1.37f);
	const Point c(1.86f, 2.19f);

	//Points testing:
	const Point d(1.24f, 4.25f);
	const Point e(-1.6f, 0.37);
	const Point f(-2.04, 2.69f);
	const Point g(-4.76f, 4.01f);
	std::cout << NBLUE << "d " << RESET;
	bsp(a, b, c, d);
	std::cout << NBLUE << "e " << RESET;
	bsp(a, b, c, e);
	std::cout << NBLUE << "f " << RESET;
	bsp(a, b, c, f);
	std::cout << NBLUE << "g " << RESET;
	bsp(a, b, c, g);

	return 0;
}