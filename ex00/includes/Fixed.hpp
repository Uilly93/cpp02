#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include "colors.hpp"

class Fixed{
	public:
	//Constructor:
	Fixed();
	Fixed(const Fixed &src);
	//Destructor:
	~Fixed();
	//Operator Overload:
	Fixed &operator=(Fixed const & rhs);
	//Member functions:
	const int	&getRawBits(void) const;
	void		setRawBits(int const raw);

	private:
	static const int _FixedPoint = 8;
	int _MyInt;
};

#endif