#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
private:
	int					_fixed;
	static const int	_fract;

public:
	Fixed();
	Fixed(const Fixed &toCopy);
	Fixed(const int num);
	Fixed(const float num);
	~Fixed();

	Fixed& operator=(const Fixed &toCopy);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& obj);

#endif
