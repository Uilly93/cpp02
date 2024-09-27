#include "../includes/Fixed.hpp"
#include <algorithm>
#include <cmath>


Fixed::Fixed(){
	_value = 0;
	// std::cout << GREEN << "Default Constructor called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed &src){
	// std::cout << CYAN << "Copy Constructor called" << RESET << std::endl;
	*this = src; 
}

Fixed::Fixed(const int nb){
	// std::cout << BLUE << "Int constructor called" << RESET << std::endl;
	_value = nb << Fixed::_FixedPoint;
}

Fixed::Fixed(const float nb_float){
	// std::cout << ORANGE << "Float constructor called" << RESET << std::endl;
	_value = roundf(nb_float * (1 << Fixed::_FixedPoint));
}

Fixed::~Fixed(){
	// std::cout << RED << "Destructor called" << RESET << std::endl;
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

Fixed &Fixed::min(Fixed& cmp, Fixed& cmp2){
	if(cmp < cmp2)
		return cmp;
	return cmp2;
}

Fixed const &Fixed::min(Fixed const &cmp,Fixed const & cmp2){
	if(cmp < cmp2)
		return cmp;
	return cmp2;
}

Fixed &Fixed::max(Fixed& cmp, Fixed& cmp2){
	if(cmp > cmp2)
		return cmp;
	return cmp2;
}

Fixed const &Fixed::max( Fixed const & cmp, Fixed const & cmp2){
	if(cmp > cmp2)
		return cmp;
	return cmp2;
}


Fixed &Fixed::operator=(Fixed const & rhs) {
	// std::cout << PURPLE << "Copy assignment operator called" << RESET << std::endl;
	if (this != &rhs) {
		this->_value = rhs.getRawBits();
	}
	return *this;
}

bool	Fixed::operator<(Fixed const & rhs)const {
	return this->_value < rhs._value;
}

bool	Fixed::operator>(Fixed const & rhs)const {
	return this->_value > rhs._value;
}

bool	Fixed::operator>=(Fixed const & rhs)const {
	return this->_value >= rhs._value;
}

bool	Fixed::operator<=(Fixed const & rhs)const {
	return this->_value <= rhs._value;
}

bool	Fixed::operator==(Fixed const & rhs)const {
	return this->_value == rhs._value;
}

bool	Fixed::operator!=(Fixed const & rhs)const {
	return this->_value != rhs._value;
}



Fixed	Fixed::operator+(Fixed const & rhs){
	return this->toFloat() + rhs.toFloat();
}

Fixed	Fixed::operator-(Fixed const & rhs){
	return this->toFloat() - rhs.toFloat();
}

Fixed	Fixed::operator*(Fixed const & rhs){
	return this->toFloat() * rhs.toFloat();
}

Fixed	Fixed::operator/(Fixed const & rhs){
	if(*this == 0 || rhs == 0)
		return 0;
	return this->toFloat() / rhs.toFloat();
}


//post
Fixed Fixed::operator++(int){
	Fixed a(*this);
	_value++;
	return a;
}

Fixed &Fixed::operator++(){
	this->_value++;
	return *this;
}
// post
Fixed Fixed::operator--(int){
	Fixed a(*this);
	_value--;
	return *this;
}

Fixed &Fixed::operator--(){
	_value--;
	return *this;
}

std::ostream & operator<<(std::ostream & out, Fixed const & src){
	return out << src.toFloat();
}