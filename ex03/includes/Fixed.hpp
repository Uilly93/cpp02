#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <ostream>
#include <cmath>
#include "colors.hpp"

class Fixed{
	public:
	//Constructors:
	Fixed();
	Fixed(const Fixed &src);
	Fixed(const int nb);
	Fixed(const float nb_float);
	//Operator Overload:
	Fixed &operator=(Fixed const & rhs);
	bool operator<(Fixed const & rhs)const;
	bool operator>(Fixed const & rhs)const;
	bool operator>=(Fixed const & rhs)const;
	bool operator<=(Fixed const & rhs)const;
	bool operator==(Fixed const & rhs)const;
	bool operator!=(Fixed const & rhs)const;

	Fixed operator+(Fixed const & rhs) const ;
	Fixed operator-(Fixed const & rhs) const ;
	Fixed operator*(Fixed const & rhs) const ;
	Fixed operator/(Fixed const & rhs) const ;

	Fixed operator++(int);
	Fixed &operator++();
	Fixed operator--(int);
	Fixed &operator--();
	//Destructor:
	~Fixed();
	//Member functions:
	Fixed static &min(Fixed& cmp, Fixed& cmp2);
	Fixed const static &min(const Fixed& cmp, const Fixed& nb2);
	Fixed static &max(Fixed& cmp, Fixed& cmp2);
	Fixed const static &max(const Fixed& nb1, const Fixed& nb2);
	const int	&getRawBits(void) const;
	void		setRawBits(int const raw);
	float		toFloat( void ) const;
	int			toInt( void ) const;

	private:
	static const int _FixedPoint = 8;
	int _value;
};

std::ostream & operator<<(std::ostream & out, Fixed const & src);

#endif