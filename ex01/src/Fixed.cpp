#include "../includes/Fixed.hpp"
#include <cmath>


Fixed::Fixed(){
	std::cout << GREEN << "Default Constructor called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed &src){
	std::cout << CYAN << "Copy Constructor called" << RESET << std::endl;
	*this = src; 
}

Fixed::Fixed(const int nb){
	std::cout << BLUE << "Int constructor called" << RESET << std::endl;
	_value = nb << Fixed::_FixedPoint;
}

Fixed::Fixed(const float nb_float){
	std::cout << ORANGE << "Float constructor called" << RESET << std::endl;
	_value = roundf(nb_float * (1 << Fixed::_FixedPoint));
}

Fixed::~Fixed(){
	std::cout << RED << "Destructor called" << RESET << std::endl;
}


Fixed &Fixed::operator=(Fixed const & rhs) {
	std::cout << PURPLE << "Copy assignment operator called" << RESET << std::endl;
	if (this != &rhs) {
		this->_value = rhs.getRawBits();
	}
	return *this;
}

const int &Fixed::getRawBits(void) const {
	return _value;
}

void	Fixed::setRawBits(const int raw) {
	_value = raw;
}

float	Fixed::toFloat( void ) const{
	return (float)_value / (1 << Fixed::_FixedPoint);
}

int	Fixed::toInt( void ) const{
	return _value >> 8;
}

std::ostream & operator<<(std::ostream & out, Fixed const & src){
	return out << src.toFloat();
}