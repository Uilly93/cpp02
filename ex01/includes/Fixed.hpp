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
	//Destructor:
	~Fixed();
	//Operator Overload:
	Fixed &operator=(Fixed const & rhs);
	//Member functions:
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