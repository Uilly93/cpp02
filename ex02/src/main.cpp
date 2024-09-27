#include <iostream>
#include "../includes/Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed nb(42.42f);
	std::cout << nb << std::endl;
	std::cout << --nb << std::endl;
	std::cout << nb << std::endl;
	std::cout << nb-- << std::endl;
	std::cout << nb << std::endl;
	return 0;
}