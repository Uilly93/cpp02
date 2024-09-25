#include "../includes/Fixed.hpp"


Fixed::Fixed(){
	std::cout << GREEN << "Default Constructor called" << RESET << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const Fixed &src){
	std::cout << BLUE << "Copy Constructor called" << RESET << std::endl;
	*this = src; 
}

Fixed::~Fixed(){
	std::cout << RED << "Destructor called" << RESET << std::endl;
}

Fixed &Fixed::operator=(Fixed const & rhs) {
	std::cout << PURPLE << "Copy assignment operator called" << RESET << std::endl;
	if (this != &rhs) {
		this->_MyInt = rhs.getRawBits();
	}
	return *this;
}

const int &Fixed::getRawBits(void) const {
	std::cout << NGREEN << "getRawBits member function called" << RESET << std::endl;
	return _MyInt;
}

void	Fixed::setRawBits(const int raw) {
	_MyInt = raw;
}