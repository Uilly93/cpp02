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
	Fixed nb2(2);
	std::cout << nb << std::endl;
	std::cout << --nb << std::endl;
	std::cout << nb << std::endl;
	std::cout << nb-- << std::endl;
	std::cout << nb << std::endl;

	std::cout << nb * nb2 << std::endl;
	std::cout << nb / nb2 << std::endl;

	return 0;
}